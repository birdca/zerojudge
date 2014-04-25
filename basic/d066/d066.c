/**********************************************************************************/
/*  Problem: d066 "上學去吧！" from 板橋高中                             */
/*  Language: C (290 Bytes)                                                       */
/*  Result: AC(0ms, 288KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-10 11:43:20                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF)
    {
        int sum = a * 100 + b;

        if (sum < 730 || sum >= 1700)
            printf("Off School\n");
        else
            printf("At School\n");
    }

    return 0;
}

