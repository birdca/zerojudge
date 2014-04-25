/**********************************************************************************/
/*  Problem: a059 "完全平方和" from                                          */
/*  Language: C (416 Bytes)                                                       */
/*  Result: AC(0ms, 300KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-28 11:14:13                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input;
    int a, b;
    int i, j;
    int sum = 0;
    int test = 0;

    scanf("%d", &input);
    for (j = 0; j < input; j++)
    {
        scanf("%d", &a);
        scanf("%d", &b);

        for (i = 1, sum = 0; i*i <= b; i++)
            if (i*i >= a)
                sum += i*i;
        printf("Case %d: %d\n", ++test, sum);
    }

    return 0;
}

