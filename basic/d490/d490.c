/**********************************************************************************/
/*  Problem: d490 "我也愛偶數" from 板橋高中                             */
/*  Language: C (305 Bytes)                                                       */
/*  Result: AC(0ms, 300KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-29 19:17:26                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF)
    {
        int i;
        int sum = 0;

        if (a % 2)
            ++a;

        for (i = a; i <= b; i = i + 2)
            sum += i;

        printf("%d\n", sum);
    }

    return 0;
}

