#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int test;
    int i;

    scanf("%d", &test);
    for (i = 1; i <= test; i++)
    {
        int f;
        int j;
        double sum = 0;

        scanf("%d", &f);
        for (j = 1; j <= f; j++)
        {
            int a, b, c;

            scanf("%d %d %d", &a, &b, &c);
            sum += (double) a / b * c * b;
        }
        cout << (long long) sum << endl;
    }

    return 0;
}
