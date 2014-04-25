/**********************************************************************************/
/*  Problem: d511 "小明的作業" from 板橋高中                             */
/*  Language: C (442 Bytes)                                                       */
/*  Result: AC(0ms, 296KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-30 00:47:52                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int array[4] = {0};
    int cnt = 0;

    while (scanf("%d %d %d", &array[0], &array[1], &array[2]) != EOF)
    {
        int max = 0;
        int i;

        for (i = 0; i < 3; i++)
            if (array[max] < array[i])
                max = i;

        if ((array[0]+array[1]+array[2] - array[max]) > array[max])
            ++cnt;
    }
    printf("%d\n", cnt);

    return 0;
}

