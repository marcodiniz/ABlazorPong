using System;
using System.Timers;

namespace BlazorPongWasm.Logic
{
    //public static class ScreenSize
    //{
    //    public static readonly int Width = 800;
    //    public static readonly int Heigth = 600;
    //}

    public class Game
    {
        public event EventHandler FrameUpdated;
        public event EventHandler<string> NotifyEvent;
        public Bar BarLeft { get; } = new(false, 1f);
        public Bar BarRight { get; } = new(true, 2f);
        public Ball Ball { get; } = new();
        public int ScorePlayer { get; private set; }
        public int ScoreAI { get; private set; }

        private Bar[] bars;
        private Timer timer = new();

        public Game()
        {
            bars = new[] { BarLeft, BarRight };
        }

        public void Start()
        {
            Ball.SetRandomStartSpeed();

            timer.AutoReset = true;
            timer.Interval = 1000 / 30; //fps
            timer.Elapsed += Timer_Elapsed;
            timer.Start();
        }


        private void Timer_Elapsed(object sender, ElapsedEventArgs e)
        {
            Ball.DoMove();

            CheckWallCollision();

            CheckBarCollison();

            //here we call a state-of-the-art Artificial Inteligence, using the most advacend
            //prediction algoritms and some of the most powerful and well treined neural networks
            //to control the computer's bar
            ComputerAIEngineMove();

            MoveBars();

            CheckGoal();

            FrameUpdated?.Invoke(this, EventArgs.Empty);
        }

        private void ComputerAIEngineMove()
        {
            var deltaY = Ball.Rect.CenterY - BarLeft.Rect.CenterY;
            BarLeft.MoveDirection = Math.Abs(deltaY) < 4 ? 0 : Math.Sign(deltaY);
        }

        private void MoveBars()
        {

            foreach (var b in bars)
            {
                b.Rect.CenterY += b.Speed * b.MoveDirection;
                if (b.Rect.Top < 0)
                    b.Rect.CenterY += b.Speed;
                if (b.Rect.Bottom > 100)
                    b.Rect.CenterY -= b.Speed;

            }

        }

        private void CheckBarCollison()
        {
            var targetBar = Ball.XDirection == 1 ? BarRight : BarLeft;

            if (Ball.Rect.Bottom < targetBar.Rect.Top
                || Ball.Rect.Top > targetBar.Rect.Bottom
                || Ball.Rect.Right < targetBar.Rect.Left
                || Ball.Rect.Left > targetBar.Rect.Right
                )
                return;

            Ball.XDirection *= -1;
            Ball.SpeedX += 0.1f;

            //let's change the Y speed to acelerate when close to paddle corners and slow down near the center
            var deltaY = Math.Abs(targetBar.Rect.CenterY - Ball.Rect.CenterY);
            var rateY = deltaY / (targetBar.Rect.Heigth / 2);
            var ySpeedDeltaChange = 0f;
            if (rateY < 0.5f) //slow down just a little
                ySpeedDeltaChange -= 0.1f * (rateY * 2);
            else //accelerate
                ySpeedDeltaChange += 0.2f * (rateY * 2);

            Ball.SpeedY += ySpeedDeltaChange;

            NotifyEvent?.Invoke(this, "hit");
        }

        private void CheckGoal()
        {
            if (Ball.Rect is { Left: <= 0 or >= 100 })
            {
                if (Ball.XDirection == 1)
                    ScoreAI += 1;
                else
                    ScorePlayer += 1;

                Ball.SetRandomStartSpeed();

                if (ScoreAI > 9 || ScorePlayer > 9)
                {
                    ScoreAI = ScorePlayer = 0;
                }

                NotifyEvent?.Invoke(this, "goal");

            }
        }

        private void CheckWallCollision()
        {
            if (Ball.Rect is { Top: <= 0 or >= 100 })
            {
                Ball.YDirection *= -1;
                NotifyEvent?.Invoke(this, "wall");
            }
        }
    }

    public class Ball
    {
        public Rectangle Rect { get; }
        public float MaxSpeedX { get; private set; } = 2.5f;
        public float MaxSpeedY { get; private set; } = 4f;

        private Random rnd = new Random();

        private float speedX;
        public float SpeedX
        {
            get { return speedX; }
            set { speedX = Math.Min(Math.Abs(value), MaxSpeedX); }
        }

        private float speedY;
        public float SpeedY
        {
            get { return speedY; }
            set { speedY = Math.Min(Math.Abs(value), MaxSpeedY); }
        }

        public int XDirection { get; set; }
        public int YDirection { get; set; }

        public Ball()
        {
            Rect = new Rectangle();
            Rect.Heigth = 2f;
            Rect.Width = 2f;
            Rect.CenterY = Rect.CenterX = 50;
        }

        public void DoMove()
        {
            Rect.CenterX += SpeedX * XDirection;
            Rect.CenterY += SpeedY * YDirection;
        }

        public void SetRandomStartSpeed()
        {
            Rect.CenterX = Rect.CenterY = 50;

            //random from 30% max speed, UP or DOWN
            speedY = rnd.NextSingle() * 0.3f * MaxSpeedY;
            YDirection = 1 - (2 * rnd.Next(2));

            //x% max speed, LEFT or RIGHT
            speedX = 0.3f * MaxSpeedX;
            XDirection = 1 - (2 * rnd.Next(2));
        }
    }

    public class Bar
    {
        public Rectangle Rect { get; }
        public float Speed { get; }
        public int MoveDirection = 0;

        public Bar(bool isRight, float speed)
        {
            Rect = new Rectangle();
            Rect.Heigth = 12;
            Rect.Width = 1.5f;
            Rect.CenterY = 50;
            Rect.CenterX = isRight
                ? 93
                : 7;

            Speed = speed;
        }

    }

    public class Rectangle
    {
        public float Width { get; set; }
        public float Heigth { get; set; }
        public float CenterX { get; set; }
        public float CenterY { get; set; }

        public float Top => CenterY - Heigth / 2;
        public float Bottom => CenterY + Heigth / 2;
        public float Left => CenterX - Width / 2;
        public float Right => CenterX + Width / 2;

        public string ToStyle() => $@"
width:  {Width}%;
height: {Heigth}%;
top:    {Top}%;
left:   {Left}%;
";
    }
}
