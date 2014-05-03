#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int test;

    while (scanf("%d", &test) && test != 0)
    {
        int i;
        int sum = 0;
        int input[1024];

        for (i = 1; i <= test; i++)
        {
            scanf("%d", &input[i]);
            sum += input[i];
        }

        double div = (double) sum / test;
        int cnt = 0;

        for (i = 1; i <= test; i++)
            if (input[i] < div)
                ++cnt;
        cout << cnt << endl;
    }

    return 0;
}
