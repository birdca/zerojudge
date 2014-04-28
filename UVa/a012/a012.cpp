#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    long long a, b;

    while (scanf("%lld %lld", &a, &b) != EOF)
        cout << llabs(a - b) << endl;

    return 0;
}
