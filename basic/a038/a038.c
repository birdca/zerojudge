/**********************************************************************************/
/*  Problem: a038 "數字翻轉"                                                  */
/*  Language: C (312 Bytes)                                                       */
/*  Result: AC(0ms, 292KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-13 21:57:54                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input;

    while (scanf("%d", &input) != EOF)
    {
        int output = 0;

        while (input != 0)
        {
            output = output * 10 + input % 10;
            input /= 10;
        }
        printf("%d\n", output);
    }

    return 0;
}

