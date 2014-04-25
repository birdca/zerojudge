/**********************************************************************************/
/*  Problem: a694 "吞食天地二" from                                          */
/*  Language: C (636 Bytes)                                                       */
/*  Result: AC(0.9s, 1.3MB) judge by this@ZeroJudge                               */
/*  Author: birdca at 2014-04-16 15:14:06                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int array[512][512] = {0};
    int n, m;

    while (scanf("%d %d", &n, &m) != EOF)
    {
        int i, j;

        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &array[i][j]);

        for (i = 0; i < m; i++)
        {
            int k, js, ks, je, ke;
            int sum = 0;

            scanf("%d %d %d %d", &js, &ks, &je, &ke);
            for (j = js; j <= je; j++)
                for (k = ks; k <= ke; k++)
                    sum += array[j-1][k-1];
            printf("%d\n", sum);
        }
    }

    return 0;
}

