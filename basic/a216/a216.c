/**********************************************************************************/
/*  Problem: a216 "數數愛明明" from                                          */
/*  Language: C (324 Bytes)                                                       */
/*  Result: AC(0ms, 296KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-28 17:42:55                                         */
/**********************************************************************************/


#include <stdio.h>

long long f(long long input)
{
    return input*(input + 1)/2;
}

long long g(long long input)
{
    return input*(input+1)*(input+2)/6;
}

int main()
{
    long long input;

    while (scanf("%lld", &input) != EOF)
        printf("%lld %lld\n", f(input), g(input));

    return 0;
}

