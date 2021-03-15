using System;
using System.Timers;

namespace BlazorPongWasm.Logic
{
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
}
