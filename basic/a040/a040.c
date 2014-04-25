/**********************************************************************************/
/*  Problem: a040 "阿姆斯壯數"                                               */
/*  Language: C (840 Bytes)                                                       */
/*  Result: AC(60ms, 320KB) judge by this@ZeroJudge                               */
/*  Author: birdca at 2014-03-11 16:38:13                                         */
/**********************************************************************************/


#include <stdio.h>
#include <string.h>
#include <math.h>

int armstrongTest(int x)
{
    char num[8] = {0};
    int len;
    int i;
    long long result = 0;

    sprintf(num, "%d", x);
    len = strlen(num);
    for (i = 0; i < len; i++)
    {
        result += (long long) pow(num[i] - '0', len);

        if (result > x)
            return -1;
    }

    if (result == x)
    {
        printf("%d ", x);
        return 1;
    }
    else
        return -1;
}

int main()
{
    int x, y;
    int result = 0;

    while (scanf("%d %d", &x, &y) != EOF)
    {
        result = 0;

        for (; x <= y; x++)
            if (armstrongTest(x) == 1)
                ++result;

        if (result == 0)
            printf("none\n");
        else
            printf("\n");
    }

    return 0;
}

