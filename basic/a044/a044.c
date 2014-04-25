/**********************************************************************************/
/*  Problem: a044 "空間切割" from 許介彥                                   */
/*  Language: C (180 Bytes)                                                       */
/*  Result: AC(4ms, 288KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-27 16:47:03                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input = 0;

    while (scanf("%d", &input) != EOF)
        printf("%d\n", 1 + input * (input * input + 5) / 6);

    return 0;
}

