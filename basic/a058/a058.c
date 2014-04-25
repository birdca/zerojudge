/**********************************************************************************/
/*  Problem: a058 "MOD3" from                                                     */
/*  Language: C (311 Bytes)                                                       */
/*  Result: AC(0ms, 292KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-27 21:59:35                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int test = 0;
    int input = 0;
    int can[3] = {0};
    int i;

    scanf("%d", &test);
    for (i = 0; i < test; i++)
    {
        scanf("%d", &input);
        ++can[input % 3];
    }
    printf("%d %d %d\n", can[0], can[1], can[2]);

    return 0;
}

