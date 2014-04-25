/**********************************************************************************/
/*  Problem: a053 "Sagit's 計分程式" from Sagit's 教學題                   */
/*  Language: C (422 Bytes)                                                       */
/*  Result: AC(0ms, 300KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-27 16:56:37                                         */
/**********************************************************************************/


#include <stdio.h>

void solve(int input)
{
    int sum = 0;

    if (input >= 40)
        sum = 100;
    else if (input >= 21)
        sum = 80 + input - 20;
    else if (input >= 11)
        sum = 60 + (input - 10) * 2;
    else
        sum = input * 6;

    printf("%d\n", sum);
}

int main()
{
    int input = 0;

    while (scanf("%d", &input) != EOF)
        solve(input);

    return 0;
}

