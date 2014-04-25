/**********************************************************************************/
/*  Problem: d489 "伏林的三角地" from 板橋高中                          */
/*  Language: C (234 Bytes)                                                       */
/*  Result: AC(0ms, 312KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-29 19:13:52                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    long long a, b, c;

    while (scanf("%lld %lld %lld", &a, &b, &c) != EOF)
    {
        long long s = (a+b+c)/2;
        printf("%lld\n", s*(s-a)*(s-b)*(s-c));
    }

    return 0;
}

