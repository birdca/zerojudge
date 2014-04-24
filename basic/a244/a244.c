/**********************************************************************************/
/*  Problem: a244 "新手訓練 ~ for + if" from 新手訓練系列 ~ 1           */
/*  Language: C (627 Bytes)                                                       */
/*  Result: AC(8ms, 300KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-24 16:41:20                                         */
/**********************************************************************************/



#include <stdio.h>

int main()
{
    int test;
    int a, b, c;
    int i;

    scanf("%d", &test);
    for (i = 1; i <= test; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        switch (a)
        {
            case 1:
                printf("%lld\n", (long long) b + c);
                break;
            case 2:
                printf("%d\n", (b - c));
                break;
            case 3:
                printf("%lld\n", (long long) b * c);
                break;
            case 4:
                printf("%d\n", b / c);
                break;
        }
    }

    return 0;
}
