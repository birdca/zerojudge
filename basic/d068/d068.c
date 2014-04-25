/**********************************************************************************/
/*  Problem: d068 "該減肥了！" from 板橋高中                             */
/*  Language: C (169 Bytes)                                                       */
/*  Result: AC(0ms, 300KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-10 11:50:03                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input;

    while (scanf("%d", &input) != EOF)
        printf("%d\n", (input > 50)?input - 1:input);

    return 0;
}

