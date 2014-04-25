/**********************************************************************************/
/*  Problem: a414 "位元運算之進位篇" from  c910335                        */
/*  Language: C (300 Bytes)                                                       */
/*  Result: AC(0.2s, 304KB) judge by this@ZeroJudge                               */
/*  Author: birdca at 2014-03-29 00:46:10                                         */
/**********************************************************************************/


#include <stdio.h>

void solve(int input)
{
    int cnt = 0;

    while (input % 2 != 0)
    {
        input /= 2;
        ++cnt;
    }
    printf("%d\n", cnt);
}

int main()
{
    int input;

    while (scanf("%d", &input) && input != 0)
        solve(input);

    return 0;
}

