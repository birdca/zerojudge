/**********************************************************************************/
/*  Problem: a002 "簡易加法"                                                  */
/*  Language: C (178 Bytes)                                                       */
/*  Result: AC(0ms, 312KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2013-11-23 02:02:30                                         */
/**********************************************************************************/


#include<stdio.h>

int main()
{
    long long a = 0;
    long long b = 0;

    while(scanf("%lld %lld", &a, &b) != EOF)
        printf("%lld\n", a + b);

    return 0;
}
