/**********************************************************************************/
/*  Problem: a799 "正值國" from                                                */
/*  Language: C (229 Bytes)                                                       */
/*  Result: AC(0ms, 312KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-16 15:18:12                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int num;

    while (scanf("%d", &num) != EOF)
    {
        if (num < 0)
            printf("%d\n", -num);
        else
            printf("%d\n", num);
    }

    return 0;
}

