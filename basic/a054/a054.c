/**********************************************************************************/
/*  Problem: a054 "電話客服中心" from 板橋高中教學題                 */
/*  Language: C (959 Bytes)                                                       */
/*  Result: AC(4ms, 288KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-27 21:29:57                                         */
/**********************************************************************************/


#include <stdio.h>
#include <string.h>

int num[] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};

void solve(char input[16], char ans[32])
{
    int i;
    int result = (10 - (input[8] - '0')) % 10;
    int sum = (input[0] - '0') * 8 + (input[1] - '0') * 7 + (input[2] - '0') * 6 + (input[3] - '0') * 5 + (input[4] - '0') * 4 + (input[5] - '0') * 3 + (input[6] - '0') * 2 + (input[7] - '0');

    for (i = 0; i < 26; i++)
    {
        if (result == (sum + num[i] % 10 * 9 + num[i] / 10) % 10)
        {
            char tmp[2];
            memset(tmp, '\0', 2);
            sprintf(tmp, "%c", i + 'A');
            strcat(ans, tmp);
        }
    }
}

int main()
{
    char input[16];
    char ans[32];

    while (scanf("%s", input) != EOF)
    {
        memset(ans, '\0', 32);

        solve(input, ans);
        printf("%s\n", ans);
    }

    return 0; 
}

