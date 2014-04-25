/**********************************************************************************/
/*  Problem: d072 "文文的求婚--續集 (Case 版)" from 板橋高中          */
/*  Language: C (330 Bytes)                                                       */
/*  Result: AC(0ms, 292KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-10 12:06:29                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int test;
    int input;
    int i;

    scanf("%d", &test);
    for (i = 1; i <= test; i++)
    {
        scanf("%d", &input);
        printf("Case %d: %s\n", i, (input % 400 == 0 || (input % 4 == 0 && input % 100 != 0))?"a leap year":"a normal year");
    }

    return 0;
}

