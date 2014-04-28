#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF)
        cout << (a + b) * 2 << endl;

    return 0;
}
