/**********************************************************************************/
/*  Problem: a410 "解方程" from TYVJ                                           */
/*  Language: C (552 Bytes)                                                       */
/*  Result: AC(0ms, 328KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-24 14:12:05                                         */
/**********************************************************************************/



#include <stdio.h>

int main()
{
    int a, b, c, d, e, f;

    while (scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF)
    {
        double tmp = a * e - b * d;

        if (tmp == 0)
        {
            if (c * e == b * f)
                printf("Too many\n");
            else
                printf("No answer\n");
        }
        else
        {
            printf("x=%.2lf\n", (double) (c * e - b * f) / tmp);
            printf("y=%.2lf\n", (double) (a * f - c * d) / tmp);
        }
    }

    return 0;
}
