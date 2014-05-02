#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int test;
    int i;

    scanf("%d", &test);
    for (i = 1; i <= test; i++)
    {
        char tmpA[16] = {0};
        char tmpB[16] = {0};
        char a[16] = {0};
        char b[16] = {0};
        int num;
        int j;
        int tmpR = 0;
        int relation = 0;

        scanf("%d", &num);
        for (j = 1; j <= num; j++)
        {
            scanf("%s %s %d", tmpA, tmpB, &tmpR);
            if (tmpR < relation)
            {
                strcpy(a, tmpA);
                strcpy(b, tmpB);
                relation = tmpR;
            }
        }
        if (relation < 0)
            cout << a << " " << b << " " << endl;
        else
            cout << "Are you kidding me?" << endl;
    }

    return 0;
}
