/**********************************************************************************/
/*  Problem: a034 "二進位制轉換"                                            */
/*  Language: C (489 Bytes)                                                       */
/*  Result: AC(0ms, 304KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-11 15:04:34                                         */
/**********************************************************************************/


#include <stdio.h>
#include <string.h>

void strcatHead(char str[64], int i)
{
    char tmp[64] = {0};

    memset(tmp, '\0', 64);

    sprintf(tmp, "%d%s", i, str);
    strcpy(str, tmp);
}

int main()
{
    int input;
    char str[64] = {0};

    while (scanf("%d", &input) != EOF)
    {
        memset(str, '\0', 64);

        do 
            strcatHead(str, input % 2);
        while ((input /= 2) != 0);
        printf("%s\n", str);
    }

    return 0;
}

