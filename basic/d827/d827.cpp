#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int input;

    while (scanf("%d", &input) != EOF)
        cout << input / 12 * 50 + input % 12 * 5 << endl;

    return 0;
}
