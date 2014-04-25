/**********************************************************************************/
/*  Problem: a016 "數獨(SUDOKU)"                                                */
/*  Language: C (1451 Bytes)                                                      */
/*  Result: AC(0ms, 272KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-07 16:56:51                                         */
/**********************************************************************************/


#include <stdio.h>

int getInput(int array[10][10])
{
    int i, j;

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (scanf("%d", &array[i][j]) != 1)
                return EOF;
        }
    }
}

int init(int array[10])
{
    int i;

    for (i = 0; i < 9; i++)
        array[i] = 0;
}

int test(int array[10])
{
    int i;

    for (i = 0; i < 9; i++)
        if (array[i] != 1)
            return -1;

    return 0;
}

int exam1(int array[10][10])
{
    int sodu[10] = {0};
    int i, j;

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
            sodu[array[i][j]-1] = 1;

        if (test(sodu) < 0)
            return -1;

        init(sodu);
    }

    return 0;
}

int exam2(int array[10][10])
{
    int sodu[10] = {0};
    int i, j, k;

    for (k = 0; k <= 6; k += 3)
    {
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                sodu[array[i+k][j+k]-1] = 1;

        if (test(sodu) < 0)
            return -1;

        init(sodu);
    }

    return 0;
}

void doExam(int array[10][10])
{
    if (exam1(array) < 0)
        printf("no\n");
    else if (exam2(array) < 0)
        printf("no\n");
    else
        printf("yes\n");
}

int main()
{
    int array[10][10];
    int space;

    while (getInput(array) != EOF)
        doExam(array);

    return 0;
}

