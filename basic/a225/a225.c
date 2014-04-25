/**********************************************************************************/
/*  Problem: a225 "明明愛排列" from                                          */
/*  Language: C (891 Bytes)                                                       */
/*  Result: AC(4ms, 344KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-28 23:29:21                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input;
    int i, j, k;
    int tmp;
    int mod;
    int array[10][1024] = {0};

    while (scanf("%d", &input) != EOF)
    {
        for (i = 0; i < 10; i++)
            array[i][0] = 0;

        for (i = 0; i < input; i++)
        {
            scanf("%d", &tmp);
            mod = tmp % 10;
            array[mod][++array[mod][0]] = tmp;
        }

        for (i = 0; i < 10; i++)
        {
            for (j = 1; j <= array[i][0]; j++)
            {
                int max = 1;
                for (k = 1; k <= array[i][0]; k++)
                {
                    if (array[i][max] < array[i][k])
                        max = k;
                }
                printf("%d ", array[i][max]);
                array[i][max] = -1;
            }
        }
        printf("\n");
    }

    return 0;
}

