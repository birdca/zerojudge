/**********************************************************************************/
/*  Problem: d063 "0 與 1" from 板橋高中                                     */
/*  Language: C (154 Bytes)                                                       */
/*  Result: AC(0ms, 300KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-10 11:12:07                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input = 0;

    while (scanf("%d", &input) != EOF)
        printf("%d\n", input ^ 1);

    return 0;
}

