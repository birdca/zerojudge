#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int test;
    int num = 0;

    while (scanf("%d", &test) && test != 0)
    {
        int i;
        int array[64] = {0};
        int sum = 0;

        ++num;
        for (i = 1; i <= test; i++)
        {
            scanf("%d", &array[i]);
            sum += array[i];
        }

        int div = sum / test;
        int cnt = 0;

        for (i = 1; i <= test; i++)
        {
            array[i] -= div;
            if (array[i] > 0)
                cnt += array[i];
        }

        cout << "Set #" << num << endl;
        cout << "The minimum number of moves is " << cnt << "." << endl << endl;
    }

    return 0;
}
