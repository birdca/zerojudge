/**********************************************************************************/
/*  Problem: a010 "因數分解"                                                  */
/*  Language: C (1527 Bytes)                                                      */
/*  Result: AC(72ms, 616KB) judge by this@ZeroJudge                               */
/*  Author: birdca at 2014-03-12 01:35:04                                         */
/**********************************************************************************/


#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int array[1000000];
    int counter = 1;
    int i, j;
    int isPrime = 1;
    int sqr;
    int input;
    char str[256];

    array[0] = 2;
    array[1] = 3;
    for (i = 4; i < 1000000; i++)
    {
        isPrime = 1;
        sqr = sqrt(i);
        for (j = 0; isPrime && sqr >= array[j]; j++)
            if (i % array[j] == 0)
                isPrime = 0;

        if (isPrime)
            array[++counter] = i;
    }

    while (scanf("%d", &input) != EOF)
    {
        char tmp[16];
        int timeup = 0;

        memset(str, '\0', 256);

        sqr = sqrt(input);
        counter = 0;
        for (i = 0; !timeup;)
        {
            if (input % array[i] == 0)
            {
                ++counter;
                input /= array[i];
            }
            else
            {
                if (counter)
                {
                    memset(tmp, '\0', 16);
                    if (counter > 1)
                        sprintf(tmp, "%s%d^%d", strcmp(str, "")?" * ":"", array[i], counter);
                    else
                        sprintf(tmp, "%s%d", strcmp(str, "")?" * ":"", array[i]);
                    strcat(str, tmp);
                    counter = 0;

                    if (input == 1)
                        timeup = 1;
                }

                ++i;
            }
        }
        printf("%s\n", str);
    }

    return 0;
}
