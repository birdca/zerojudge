/**********************************************************************************/
/*  Problem: a065 "提款卡密碼" from 板橋高中教學題                    */
/*  Language: C (465 Bytes)                                                       */
/*  Result: AC(4ms, 296KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-28 11:32:48                                         */
/**********************************************************************************/


#include <stdio.h>
#include <string.h>

int positive(int sum)
{
    return (sum >= 0)?sum:-sum;
}

void solve(char input[8])
{
    int len = strlen(input);
    int i;
    unsigned int pass = 0;

    for (i = 0; i < len - 1; ++i)
        pass = pass*10 + positive((input[i]) - (input[i+1]));
    printf("%06d\n", pass);
}

int main()
{
    char input[8] = {0};

    while (scanf("%s", input) != EOF)
        solve(input);

    return 0;
}

