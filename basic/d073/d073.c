/**********************************************************************************/
/*  Problem: d073 "分組報告" from 板橋高中                                */
/*  Language: C (160 Bytes)                                                       */
/*  Result: AC(0ms, 300KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-10 12:09:48                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input;

    while (scanf("%d", &input) != EOF)
        printf("%d\n", (input - 1) / 3 + 1);

    return 0;
}
