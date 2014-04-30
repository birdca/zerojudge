#include <iostream>
#include <cstdio>

using namespace std;

bool check0(int a, int b, int c, int d)
{
    if (a + b + c + d == 0)
        return true;
    return false;
}

int main()
{
    int a, b, c, d;
    int degree = 360 / 40;

    while (scanf("%d %d %d %d", &a, &b, &c, &d) != EOF && !check0(a, b, c, d))
    {
        int sum = 0;

        if (a < b)
            a += 40;

        if (c < b)
            sum += (40 + c) - b;
        else
            sum += c - b;

        if (c < d)
            c += 40;
        sum += (a - b) + (c - d);
        cout << sum * degree + 360 * 3 << endl; 
    }

    return 0;
}
