#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

struct myClass {
    int start, end;
};

bool compare(myClass a, myClass b)
{
    return a.start < b.start;
}

int main()
{
    int L;
    int test;
    int i;
    int num = 0;
    myClass my[100] = {0};

    scanf("%d %d", &L, &test);
    for (i = 0; i < test; i++)
        scanf("%d %d", &my[i].start, &my[i].end);
    sort(my, my+test, compare);

    ++L;
    int s = my[0].start;
    int e = my[0].end;
    for (i = 1; i < test; i++)
    {
        if (my[i].end < s || my[i].start > e)
        {
            L -= (e - s) + 1;
            s = my[i].start;
            e = my[i].end;
        }
        else if (my[i].start < s && my[i].end >= s)
            s = my[i].start;
        else if (my[i].end > e && my[i].start <= e)
            e = my[i].end;
    }
    L -= (e - s) + 1;
    cout << L << endl;

    return 0;
}
