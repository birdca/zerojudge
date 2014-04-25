/**********************************************************************************/
/*  Problem: d498 "我不說髒話" from 板橋高中                             */
/*  Language: C (234 Bytes)                                                       */
/*  Result: AC(0ms, 296KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-30 00:39:06                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input;

    while (scanf("%d", &input) != EOF)
    {
        int i;

        for (i = 0; i < input; i++)
            printf("I don't say swear words!\n");
    }

    return 0;
}

