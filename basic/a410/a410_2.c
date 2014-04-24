#include <stdio.h>

int main()
{
    int a, b, c, d, e, f;

    while (scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF)
    {
        double x1, y1;
        int same = 0;

        if (d != 0 && e != 0)
        {
            x1 = (double) a / d;
            y1 = (double) b / e;
            if (f * x1 == c)
                same = 1;
        }
        else if (a != 0 && b != 0)
        {
            x1 = (double) d / a;
            y1 = (double) e / b;
            if (c * x1 == f)
                same = 1;
        }

        if (x1 == y1 && same || a + b + c + d + e + f == 0)
            printf("Too many\n");
        else if (x1 == y1 && !same)
            printf("No answer\n");
        else
        {
            double x, y;

            if (a == 0 && b != 0 && d != 0)
            {
                y = (double) c / b;
                x = (double) (f - e * y) / d;
            }
            else if (d == 0 && e != 0 && a != 0)
            {
                y = (double) f / e;
                x = (double) (c - b * y) / a;
            }
            else if (b == 0 && a != 0 && e != 0)
            {
                x = (double) c / a;
                y = (double) (f - d * x) / e;
            }
            else if (e == 0 && d != 0 && b != 0)
            {
                x = (double) f / d;
                y = (double) (c - a * x) / b;
            }
            else
            {
                /* if ae = bd -> a/d = b/e -> too many or no ans */
                y = (double) (a * f - c * d) / (a * e - b * d);
                x = (double) (c - b * y) / a;
            }

            printf("x=%.2lf\n", x);
            printf("y=%.2lf\n", y);
        }
    }

    return 0;
}
