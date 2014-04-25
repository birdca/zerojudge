/**********************************************************************************/
/*  Problem: a147 "Print it all" from                                             */
/*  Language: C (271 Bytes)                                                       */
/*  Result: AC(4ms, 308KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-28 14:36:25                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input;
    int i;

    while (scanf("%d", &input) && input != 0)
    {
        for (i = 1; i < input; i++)
            if (i % 7 != 0)
                printf("%d ", i);
        printf("\n");
    }

    return 0;
}

