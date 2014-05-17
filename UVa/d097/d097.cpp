#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        int array[3000] = {0};
        int minus[3000] = {0};
        int i;
        int Jolly = 1;

        for (i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
            if (i >= 1)
            {
                int tmp = abs(array[i] - array[i - 1]);
                if (tmp > n-1 || tmp <= 0)
                    Jolly = 0;
                else
                    ++minus[tmp];
            }
        }

        for (i = 1; Jolly && i < n - 1; i++)
            if (minus[i] != 1)
                Jolly = 0;
        cout << (Jolly?"Jolly":"Not jolly") << endl;
    }

    return 0;
}
