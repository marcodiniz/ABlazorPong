namespace BlazorPongWasm.Logic
{
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
top: {Top}%;
left: {Left}%;
";
    }
}
