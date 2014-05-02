#include <iostream>
#include <cstdio>

using namespace std;

long long solve(long long a, long long b)
{
    if (a < b)
        return 0;

    long long sum = a / b;
    long long last = a % b;

    return sum + solve(last + sum, b);
}

int main()
{
    long long a, b;

    while (scanf("%lld %lld", &a, &b) != EOF)
        cout << a + solve(a, b) << endl;

    return 0;
}
