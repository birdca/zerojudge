/**********************************************************************************/
/*  Problem: a738 "最大公约数" from 海豚原创                             */
/*  Language: CPP (367 Bytes)                                                     */
/*  Result: AC(4ms, 400KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-23 16:14:44                                         */
/**********************************************************************************/



#include <iostream>
#include <cstdio>

using namespace std;

void solve(int a, int b)
{
    while (a != 0 && b != 0)
    {
        if (a >= b)
            a %= b;
        else
            b %= a;
    }

    cout << a + b << endl;
}

int main()
{
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF)
        solve(a, b);

    return 0;
}
