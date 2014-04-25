/**********************************************************************************/
/*  Problem: d058 "BASIC 的 SGN 函數" from 板橋高中                        */
/*  Language: C (168 Bytes)                                                       */
/*  Result: AC(0ms, 296KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-16 15:51:53                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input;

    while (scanf("%d", &input) != EOF)
        printf("%d\n", input > 0?1:input == 0?0:-1);

    return 0;
}

