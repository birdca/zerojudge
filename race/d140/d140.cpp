#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
    int a, b;

    while (scanf("%d.%d", &a, &b) != EOF)
    {
        long long sum = a * 100 + b;
        if (sum <= 10000)
        {
            sum *= 9;
            sum += 8000;
        }
        else if (sum <= 50000)
            sum *= 8;
        else
            sum *= 6;

        sum /= 10;
        cout << "$" << fixed << setprecision(2) << (double) sum / 100 << endl; 
    }

    return 0;
}
