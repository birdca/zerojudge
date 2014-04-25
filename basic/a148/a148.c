/**********************************************************************************/
/*  Problem: a148 "You Cannot Pass?!" from                                        */
/*  Language: C (416 Bytes)                                                       */
/*  Result: AC(0ms, 284KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-28 15:01:33                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int input;
    int i;

    while (scanf("%d", &input) != EOF)
    {
        int sum = 0;
        int score = 0;

        for (i = 0; i < input; i++)
        {
            scanf("%d", &score);
            sum += score;
        }

        if (sum*10/input < 595)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}

