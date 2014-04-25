/**********************************************************************************/
/*  Problem: a022 "迴文"                                                        */
/*  Language: C (526 Bytes)                                                       */
/*  Result: AC(0ms, 264KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-07 16:11:49                                         */
/**********************************************************************************/


#include <stdio.h>
#include <string.h>

#define MAX_LEN 1024

int main()
{
    int i;
    int strLen = 0;
    int y = 1;
    char str[MAX_LEN] = {0};

    while (scanf("%s", str) != EOF)
    {
        strLen = strlen(str);
        y = 1;

        for (i = 0; y && i < strLen; i++)
        {
            if (str[i] != str[strLen-i-1])
            {
                y = 0;
                printf("no\n");
            }
        }

        if (y)
            printf("yes\n");
    }

    return 0;
}

