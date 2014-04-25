/**********************************************************************************/
/*  Problem: d065 "三人行必有我師" from 板橋高中                       */
/*  Language: C (310 Bytes)                                                       */
/*  Result: AC(0ms, 308KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-10 11:37:31                                         */
/**********************************************************************************/


#include <stdio.h>

#define MAX(x, y) ((x) < (y))?(y):(x)

long long max(long long a, long long b, long long c)
{
   return MAX(MAX(a, b), c);
}

int main()
{
    long long a, b, c;

    while (scanf("%lld %lld %lld", &a, &b, &c) == 3)
        printf("%lld\n", max(a, b, c));

    return 0;
}

