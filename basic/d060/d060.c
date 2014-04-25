/**********************************************************************************/
/*  Problem: d060 "還要等多久啊？" from 板橋高中                       */
/*  Language: C (181 Bytes)                                                       */
/*  Result: AC(0ms, 300KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-11 00:10:56                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input;

    while (scanf("%d", &input) != EOF)
        printf("%d\n", (input <= 25)?25 - input:60 - input + 25);

    return 0;
}

