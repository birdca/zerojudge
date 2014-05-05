#include <iostream>
#include <cstdio>

using namespace std;

struct TV {
    int x;
    int y;
};

int main()
{
    int test;
    int i, j;

    while (scanf("%d", &test) && test != 0)
    {
        TV t[3000] = {0};
        for (i = 0; i < test; i++)
            scanf("%d %d", &t[i].x, &t[i].y);

        int dst = 0;
        int a, b;
        for (i = 0; i < test - 1; i++)
        {
            for (j = i + 1; j < test; j++)
            {
                int tmpX = t[i].x - t[j].x;
                int tmpY = t[i].y - t[j].y;
                int s = tmpX * tmpX + tmpY * tmpY;
                if (s > dst)
                {
                    a = i;
                    b = j;
                    dst = s;
                }
            }
        }
        cout << a << " " << b << endl;
    }

    return 0;
}
