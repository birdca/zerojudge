/**********************************************************************************/
/*  Problem: a013 "羅馬數字" from NPSC 模擬試題                           */
/*  Language: C (2436 Bytes)                                                      */
/*  Result: AC(0ms, 304KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-18 22:46:08                                         */
/**********************************************************************************/


#include <stdio.h>
#include <string.h>

char Rome[8] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
int numRome[8] = {1, 5, 10, 50, 100, 500, 1000};
char *Romes[8] = {"CM", "CD", "XC", "XL", "IX", "IV"};
char *RomeState[8] = {"DCCCC", "CCCC", "LXXXX", "XXXX", "VIIII", "IIII"};

void trans(char str[128])
{
    char tmp[128] = {0};
    char *ptr = str;
    char *ptr2 = NULL;
    int i;

    for (i = 0; i < 6; i++)
    {
        if ((ptr2  = strstr(ptr, Romes[i])) != NULL)
        {
            strncat(tmp, ptr, ptr2 - ptr);
            strcat(tmp, RomeState[i]); 
            ptr = ptr2 + 2;
        }
    }

    if (ptr)
        strcat(tmp, ptr);
    strcpy(str, tmp);
}

void trans2(char str[128])
{
    char tmp[128] = {0};
    char *ptr = str;
    char *ptr2 = NULL;
    int i;

    for (i = 0; i < 6; i++)
    {
        if ((ptr2 = strstr(ptr, RomeState[i])) != NULL)
        {
            strncat(tmp, ptr, ptr2 - ptr);
            strcat(tmp, Romes[i]);
            ptr = ptr2 + strlen(RomeState[i]);
        }
    }

    if (ptr)
        strcat(tmp, ptr);
    strcpy(str, tmp);
}

int Rome2Num(char str[128])
{
    int i, j;
    int size;
    int sum = 0;

    trans(str);
    size = strlen(str);

    for (i = 0, j = 6; i < size;)
    {
        if (str[i] == Rome[j])
        {
            sum += numRome[j];
            ++i;
        }
        else
            --j;
    }
    return sum;
}

void Num2Rome(int num, char str[128])
{
    if (num == 0)
    {
        strcpy(str, "ZERO");
        return;
    }

    if (num < 0)
        num *= -1;

    int i;
    for (i = 6; i >= 0; --i)
    {
        int cnt = num / numRome[i];

        if (cnt > 0)
        {
            int j;
            for (j = 0; j < cnt; j++)
            {
                char tmp[128] = {0};
                sprintf(tmp, "%s%c", str, Rome[i]);
                strcpy(str, tmp);
            }
            num -= cnt * numRome[i];
        }
    }
    trans2(str);
}

int main()
{
    char input1[128] = {0};
    char input2[128] = {0};
    
    while (scanf("%s", input1) && input1[0] != '#')
    {
        char ans[128] = {0};
        int num1, num2;

        scanf("%s", input2);
        num1 = Rome2Num(input1);
        num2 = Rome2Num(input2);
        Num2Rome(num1 - num2, ans);
        printf("%s\n", ans);
    }

    return 0;
}
