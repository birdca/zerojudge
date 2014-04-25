/**********************************************************************************/
/*  Problem: a001 "哈囉" from Brian Kernighan                                   */
/*  Language: C (181 Bytes)                                                       */
/*  Result: AC(0ms, 288KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2013-11-23 01:58:50                                         */
/**********************************************************************************/


#include<stdio.h>
#include <string.h>

int main()
{
    char str[1024];

    memset(str, 0, 1024);

    while (scanf("%s", str) != EOF)
        printf("hello, %s\n", str);

    return 0;
}
