/**********************************************************************************/
/*  Problem: d086 "態度之重要的證明" from 成功電研20th~21st C++ ～最後的競賽～ */
/*  Language: C (696 Bytes)                                                       */
/*  Result: AC(0ms, 288KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-10 12:25:47                                         */
/**********************************************************************************/


#include <stdio.h>
#include <string.h>

int main()
{
    char str[256] = {0};

    while (scanf("%s", str) != EOF && strcmp(str, "0"))
    {
        int sum = 0;
        int i;
        int len = strlen(str);

        for (i = 0; i < len; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                sum += str[i] - 'a' + 1;
            else if (str[i] >= 'A' && str[i] <= 'Z')
                sum += str[i] - 'A' + 1;
            else
            {
                sum = -1;
                break;
            }
        }

        if (sum == -1)
            printf("Fail\n");
        else
            printf("%d\n", sum);
    }

    return 0;
}

