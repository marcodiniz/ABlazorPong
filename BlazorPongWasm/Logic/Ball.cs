using System;

namespace BlazorPongWasm.Logic
{
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
}
