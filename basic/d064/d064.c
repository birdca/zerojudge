/**********************************************************************************/
/*  Problem: d064 "ㄑㄧˊ 數？" from 板橋高中                             */
/*  Language: C (169 Bytes)                                                       */
/*  Result: AC(0ms, 292KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-10 11:17:44                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input = 0;

    while (scanf("%d", &input) != EOF)
        printf("%s\n", (input % 2)?"Odd":"Even");

    return 0;
}

