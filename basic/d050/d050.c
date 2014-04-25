/**********************************************************************************/
/*  Problem: d050 "妳那裡現在幾點了？" from 板橋高中                 */
/*  Language: C (178 Bytes)                                                       */
/*  Result: AC(0ms, 304KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-16 15:45:04                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input;

    while (scanf("%d", &input) != EOF)
        printf("%d\n", input < 15?input + 24 - 15:input - 15);

    return 0;
}

