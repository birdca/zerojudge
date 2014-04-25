/**********************************************************************************/
/*  Problem: a042 "平面圓形切割" from 許介彥                             */
/*  Language: C (164 Bytes)                                                       */
/*  Result: AC(0ms, 292KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-27 16:41:56                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input = 0;

    while (scanf("%d", &input) != EOF)
        printf("%d\n", input*input-input+2);

    return 0;
}

