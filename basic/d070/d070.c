/**********************************************************************************/
/*  Problem: d070 "文文的求婚--續集 (0 尾版)" from 板橋高中          */
/*  Language: C (243 Bytes)                                                       */
/*  Result: AC(0ms, 284KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-10 12:03:16                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input;

    while (scanf("%d", &input) != EOF && input != 0)
        printf("%s\n", (input % 400 == 0 || (input % 4 == 0 && input % 100 != 0))?"a leap year":"a normal year");

    return 0;
}

