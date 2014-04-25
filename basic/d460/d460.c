/**********************************************************************************/
/*  Problem: d460 "山六九之旅" from 板橋高中                             */
/*  Language: C (209 Bytes)                                                       */
/*  Result: AC(0ms, 300KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-03 17:25:09                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input;

    while (scanf("%d", &input) != EOF)
        printf("%d\n", (input < 6)?0:(input < 12)?590:(input < 18)?790:(input < 60)?890:399);

    return 0;
}

