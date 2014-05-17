#include <iostream>
#include <cstdio>
#include <algorithm>

#define nMAX 1000000

using namespace std;

int main()
{
    int z, i, m, l;
    int cnt = 0;

    while (scanf("%d %d %d %d", &z, &i, &m, &l) && (z != 0 && i != 0 && m != 0 && l != 0))
    {
        int array[nMAX] = {0};
        int num = 0;
        int *ptr = NULL;

        ++cnt;
        while ((ptr = find(array, array + num, l)) == array + num)
        {
            array[num++] = l;
            l = (z * l + i) % m;
        }
        cout << "Case " << cnt << ": " << num - (ptr - array) << endl;
    }

    return 0;
}
