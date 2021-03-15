namespace BlazorPongWasm.Logic
{
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
}
