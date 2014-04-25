/**********************************************************************************/
/*  Problem: a020 "身分證檢驗"                                               */
/*  Language: C (670 Bytes)                                                       */
/*  Result: AC(0ms, 256KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-12 00:21:27                                         */
/**********************************************************************************/


#include <stdio.h>
#include <string.h>

int id[] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};

int main()
{
    char str[16];

    while (scanf("%s", str) != EOF)
    {
        int i;
        int len = strlen(str);
        int result = 0;

        result += (id[str[0] - 'A'] / 10);
        result += (id[str[0] - 'A'] % 10 * 9);
        for (i = 1; i < len - 1; i++)
            result += ((str[i] - '0') * (9 - i));
        result += (str[9] - '0');

        if (result % 10 == 0)
            printf("real\n");
        else
            printf("fake\n");
    }

    return 0;
}

