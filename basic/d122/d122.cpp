#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long input;

    while (scanf("%lld", &input) != EOF)
    {
        long long five = 5;
        int i;
        int sum = input / 5;

        for (i = 1; five * 5 <= input; i++)
        {
            five *= 5;
            sum += input / five;
        }
        cout << sum << endl;
    }

    return 0;
}
