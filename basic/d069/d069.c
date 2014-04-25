/**********************************************************************************/
/*  Problem: d069 "文文的求婚--續集 (n 行版)" from 板橋高中          */
/*  Language: C (269 Bytes)                                                       */
/*  Result: AC(0ms, 276KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-10 12:00:48                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int test;
    int input;

    scanf("%d", &test);
    while (scanf("%d", &input) != EOF)
        printf("%s\n", (input % 400 == 0 || (input % 4 == 0 && input % 100 != 0))?"a leap year":"a normal year");

    return 0;
}

