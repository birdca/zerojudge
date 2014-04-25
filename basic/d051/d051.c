/**********************************************************************************/
/*  Problem: d051 "糟糕，我發燒了！" from 板橋高中                    */
/*  Language: C (173 Bytes)                                                       */
/*  Result: AC(0ms, 340KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-16 15:48:20                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input;

    while (scanf("%d", &input) != EOF)
        printf("%.03lf\n", (double) (input - 32)* 5 / 9);

    return 0;
}

