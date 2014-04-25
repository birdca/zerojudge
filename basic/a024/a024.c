/**********************************************************************************/
/*  Problem: a024 "最大公因數(GCD)"                                          */
/*  Language: C (605 Bytes)                                                       */
/*  Result: AC(0ms, 300KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-11 15:35:38                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int x, y;
    int gcd = 0;

    while (scanf("%d %d", &x, &y) != EOF)
    {
        gcd = 0;

        while (1)
        {
            if (x < y)
            {
                if ((y %= x) == 0)
                {
                    gcd = x;
                    break;
                }
            }
            else
            {
                if ((x %= y) == 0)
                {
                    gcd = y;
                    break;
                }
            }
        }
        printf("%d\n", gcd);
    }

    return 0;
}

