/**********************************************************************************/
/*  Problem: a015 "矩陣的翻轉"                                               */
/*  Language: C (631 Bytes)                                                       */
/*  Result: AC(0ms, 324KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-07 16:14:13                                         */
/**********************************************************************************/


#include <stdio.h>

void getInput(int x, int y, int array[100][100])
{
    int i, j;

    for (i = 0; i < x; i++)
        for (j = 0; j < y; j++)
            scanf("%d", &array[i][j]);
}

void output(int x, int y, int array[100][100])
{
    int i, j;

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
            printf("%d ", array[j][i]);
        printf("\n");
    }
}

int main()
{
    int x = 0;
    int y = 0;
    int array[100][100] = {0};

    while (scanf("%d %d", &x, &y) != EOF)
    {
        getInput(x, y, array);
        output(y, x, array);
    }

    return 0;
}
