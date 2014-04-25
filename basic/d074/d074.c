/**********************************************************************************/
/*  Problem: d074 "電腦教室" from 板橋高中                                */
/*  Language: C (407 Bytes)                                                       */
/*  Result: AC(0ms, 312KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-10 12:16:41                                         */
/**********************************************************************************/


#include <stdio.h>

#define MAX(x, y) (x) < (y)?(y):(x)

int main()
{
    long long test;
    long long i;
    long long array[1024] = {0};

    scanf("%lld", &test);
    for (i = 0; i < test; i++)
        scanf("%lld", &array[i]);

    long long max = MAX(array[0], array[1]);
    for (i = 2; i < test; i++)
        max = MAX(max, array[i]);
    printf("%lld\n", max);

    return 0;
}

