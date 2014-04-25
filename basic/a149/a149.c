/**********************************************************************************/
/*  Problem: a149 "乘乘樂" from                                                */
/*  Language: C (369 Bytes)                                                       */
/*  Result: AC(0ms, 300KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-28 15:12:46                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input;
    long long sum = 1;
    int i;

    scanf("%d", &input);
    while (scanf("%d", &input) != EOF)
    {
        sum = (input > 0)?1:0;
        while (input != 0)
        {
            sum = sum * (input % 10);
            input /= 10;
        }
        printf("%lld\n", sum);
    }

    return 0;
}

