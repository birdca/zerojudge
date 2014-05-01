#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int test;
    int i;

    while (scanf("%d", &test) && test != 0)
    {
        long long area = 0;
        int tmp = 0;

        for (i = 1; i <= test; i++)
        {
            scanf("%d", &tmp);
            area += tmp * tmp;
        }
        cout << area << endl;
    }

    return 0;
}
