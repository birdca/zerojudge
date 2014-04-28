#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int test;
    int i;
    int a, b;

    scanf("%d", &test);
    for (i = 1; i <= test; i++)
    {
        scanf("%d %d", &a, &b);
        cout << (a == b?"=":a < b?"<":">") << endl;
    }

    return 0;
}
