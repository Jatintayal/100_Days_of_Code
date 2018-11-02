using System;
using System.Text;

namespace QueenAttackII
{
    class Program
    {
        static void Main(string[] args)
        {
            ProcessInput();
        }

        public static void ProcessInput()
        {
            var data = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

            int rows = data[0];
            int countObstacles = data[1];

            var queen = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int qx    = queen[0];
            int qy    = queen[1];

            // Directions:
            // 0 = left,  1 = left and up,    2 = up,   3 = right and up,
            // 4 = right, 5 = right and down, 6 = down, 7 = left and down
            int [] distances = new int[8];

            // Initialize distance to edge of board in each direction.
            distances[0] = qx;
            distances[2] = qy;
            distances[4] = rows + 1 - qx;
            distances[6] = rows + 1 - qy;
            distances[1] = Math.Min(distances[0], distances[2]);
            distances[3] = Math.Min(distances[4], distances[2]);
            distances[5] = Math.Min(distances[4], distances[6]);
            distances[7] = Math.Min(distances[0], distances[6]);

            for (int i = 0; i < countObstacles; i++)
            {
                var obstacle = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                int dx        = obstacle[0] - queen[0];
                int dy        = obstacle[1] - queen[1];
                int direction = 0;
                int distance  = 0;

                if (dx == 0)
                {
                    direction = (dy < 0) ? 2 : 6;
                    distance  = Math.Abs(dy);
                }
                else if (dy == 0)
                {
                    direction = (dx < 0) ? 0 : 4;
                    distance  = Math.Abs(dx);
                }
                else if (Math.Abs(dx) == Math.Abs(dy))
                {
                    if (dx < 0) {
                        direction = (dy < 0) ? 1 : 7;
                    } else {
                        direction = (dy < 0) ? 3 : 5;
                    }
                    distance = Math.Abs(dx);
                }
                else
                {
                    continue;
                }
                if (distance < distances[direction])
                {
                    distances[direction] = distance;
                }
            }

            int total = 0;
            for (int i = 0; i < 8; i++)
            {
                total += distances[i] - 1;
            }
            Console.WriteLine(total);
        }
    }
}