/**********************************************************************************/
/*  Problem: d067 "文文的求婚--續集 (1 行版)" from 板橋高中          */
/*  Language: C (229 Bytes)                                                       */
/*  Result: AC(0ms, 288KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-10 11:47:05                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input;

    while (scanf("%d", &input) != EOF)
        printf("%s\n", (input % 400 == 0 || (input % 4 == 0 && input % 100 != 0))?"a leap year":"a normal year");

    return 0;
}

