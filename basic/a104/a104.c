/**********************************************************************************/
/*  Problem: a104 "排序" from yoooooooo                                         */
/*  Language: C (843 Bytes)                                                       */
/*  Result: AC(4ms, 300KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-28 12:44:13                                         */
/**********************************************************************************/


#include <stdio.h>

void swap(int array[1024], int a, int b)
{
    int tmp = array[a];
    array[a] = array[b];
    array[b] = tmp;
}

void solve(int array[1024], int num)
{
    int min;
    int i, j;

    for (i = 0; i < num; i++)
    {
        min = num - 1;
        for (j = i; j < num; j++)
            if (array[min] > array[j])
                min = j;
        swap(array, i, min);
    }
}

void show(int array[1024], int num)
{
    int i;

    for (i = 0; i < num; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main()
{
    int input;
    int i;
    int array[1024] = {0};

    while (scanf("%d", &input) != EOF)
    {
        for (i = 0; i < input; i++)
            scanf("%d", &array[i]);
        solve(array, input);
        show(array, input);
    }

    return 0;
}

