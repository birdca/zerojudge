/**********************************************************************************/
/*  Problem: c013 "00488 - Triangle Wave" from ACM 488                            */
/*  Language: C (647 Bytes)                                                       */
/*  Result: AC(0ms, 296KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-25 12:40:30                                         */
/**********************************************************************************/



#include <stdio.h>

void print_line(int input)
{
    int i;

    for (i = 1; i <= input; i++)
        printf("%d", input);
    printf("\n");
}

void solve(int amp, int frq)
{
    int i, j;

    for (i = 1; i <= frq; i++)
    {
        for (j = 1; j <= amp; j++)
            print_line(j);
        for (j = amp - 1; j >= 1; j--)
            print_line(j);
        printf("\n");
    }
}

int main()
{
    int test;
    int i;
    int amp, frq;

    scanf("%d", &test);
    for (i = 1; i <= test; i++)
    {
        scanf("%d", &amp);
        scanf("%d", &frq);
        solve(amp, frq);
    }

    return 0;
}
