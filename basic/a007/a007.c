/**********************************************************************************/
/*  Problem: a007 "判斷質數"                                                  */
/*  Language: CPP (896 Bytes)                                                     */
/*  Result: AC(1s, 248KB) judge by this@ZeroJudge                                 */
/*  Author: birdca at 2014-03-07 22:09:49                                         */
/**********************************************************************************/


#include <stdio.h>
#include <math.h>

int main()
{
    int i, j;
    int sqr;
    int isPrime = 1;
    int array[5000] = {2, 3};
    int counter = 1;
    int input = 0;

    for (i = 4; i <= 46340; i++)
    {
        sqr = sqrt((double) i);
        
        isPrime = 1;
        for (j = 0; isPrime && array[j] <= sqr && j <= counter; j++)
            if (i % array[j] == 0)
                isPrime = 0;

        if (isPrime)
            array[++counter] = i;
    }

    while (scanf("%d", &input) != EOF)
    {
        isPrime = 1;
        sqr = sqrt((double) input);

        for (i = 0; isPrime && array[i] <= sqr && i <= counter; i++)
        {
            if (input % array[i] == 0)
                isPrime = 0; 
        }

        if (isPrime)
            printf("質數\n");
        else
            printf("非質數\n");
    }

    return 0;
}
