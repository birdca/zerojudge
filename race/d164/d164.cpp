#include <iostream>
#include <cstdio>

#define nMAX 10000

using namespace std;

int main()
{
    int array[nMAX] = {0};
    int test;
    int i, j;
    int buy;

    while (scanf("%d %d", &test, &buy) != EOF)
    {
        long long max = 0;
        for (i = 0; i < test; i++)
            scanf("%d", &array[i]);

        for (i = 0; i < test; i++)
        {
            long long tmp = 0;

            for (j = 0; j < buy; j++)
                tmp += array[(i + j) % test];
            if (tmp > max)
                max = tmp;
        }
        cout << max << endl;
    }

    return 0;
}
