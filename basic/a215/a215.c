/**********************************************************************************/
/*  Problem: a215 "明明愛數數" from                                          */
/*  Language: C (275 Bytes)                                                       */
/*  Result: AC(0ms, 308KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-28 15:33:35                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int m, n;

    while (scanf("%d %d", &m, &n) != EOF)
    {
        int i = m;
        int sum = 0;;

        do {
            sum += i++;
        } while (sum <= n);
        printf("%d\n", i - m);
    }

    return 0;
}

