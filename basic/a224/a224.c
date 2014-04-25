/**********************************************************************************/
/*  Problem: a224 "明明愛明明" from                                          */
/*  Language: C (1286 Bytes)                                                      */
/*  Result: AC(0ms, 276KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-18 14:37:40                                         */
/**********************************************************************************/


#include <stdio.h>
#include <string.h>

int check(char *ch)
{
    if ((*ch) <= 'Z')
        (*ch) += 32;

    if ((*ch) >= 'a' && (*ch) <= 'z')
        return 1;
    return 0;
}

int main()
{
    char array[1024] = {0};

    while (scanf("%s", array) != EOF)
    {
        char ch[27] = {0};
        int count[27] = {0};
        int i, j;
        int size = strlen(array);
        int alpha_size = 0;
        int found = 0;

        for (i = 0; i < size; i++)
        {
            found = 0;
            if (!check(&array[i]))
                continue;
            ++alpha_size;
                
            for (j = 0; !found && ch[j] != 0; j++)
            {
                if (ch[j] == array[i])
                {
                    found = 1;
                    ++count[j];
                }
            }
            if (!found)
            {
                ch[j] = array[i];
                ++count[j];
            }
        }

        int odd = 0;
        for (j = 0; ch[j] != 0; j++)
            if (count[j] % 2)
                ++odd;

        if ((alpha_size % 2 && odd == 1) || (!(alpha_size % 2) && odd == 0))
            printf("yes !\n");
        else
            printf("no...\n");
    }

    return 0;
}

