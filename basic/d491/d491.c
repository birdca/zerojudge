/**********************************************************************************/
/*  Problem: d491 "我也愛偶數 (swap 版)" from 板橋高中                  */
/*  Language: C (421 Bytes)                                                       */
/*  Result: AC(0ms, 304KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-29 23:13:06                                         */
/**********************************************************************************/


#include <stdio.h>

void swap(int *a, int *b)
{
    (*a) ^= (*b);
    (*b) ^= (*a);
    (*a) ^= (*b);
}

int main()
{
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF)
    {
        int sum = 0;

        if (a > b)
            swap(&a, &b);

        if (a % 2)
            ++a;
        for (; a <= b; a = a + 2)
            sum += a;
        printf("%d\n", sum);
    }

    return 0;
}

