#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long input;

    while (scanf("%lld", &input) != EOF)
    {
        long long a = input / 4;
        long long b = input / 2 - a;

        cout << a * b << endl;
    }

    return 0;
}
