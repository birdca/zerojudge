/**********************************************************************************/
/*  Problem: d010 "盈數、虧數和完全數" from Sagit's C++ 程式設計     */
/*  Language: C (434 Bytes)                                                       */
/*  Result: AC(4ms, 276KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-16 15:23:17                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int num;

    while (scanf("%d", &num) != EOF)
    {
        int i;
        long long sum = 0;

        for (i = 1; i < num; i++)
            if (num % i == 0)
                sum += i;

        if (sum > num)
            printf("盈數\n");
        else if (sum < num)
            printf("虧數\n");
        else
            printf("完全數\n");
    }

    return 0;
}

