#include <iostream>
#include <cstdio>

using namespace std;

struct myClass {
    int s;
    char ch;
    int e;
};

int main()
{
    int test;
    int i;

    scanf("%d", &test);
    for (i = 1; i <= test; i++)
    {
        int num;
        int j;

        scanf("%d", &num);
        myClass my[num];
        for (j = 0; j < num; j++)
            scanf("%d %c %d", &my[j].s, &my[j].ch, &my[j].e);

        /* find head */
        int k;
        for (j = 0; j < num; j++)
        {
            int found = 0;
            for (k = 0; !found && k < num; k++)
                if (my[j].s == my[j].e)
                    found = 1;
            if (!found)
                break;
        }
        cout << my[j].ch;

        int head = my[j].e;
        for (j = 0; j < num; j++)
        {
            for (k = 0; k < num; k++)
            {
                if (head == my[k].s)
                {
                    cout << my[k].ch;
                    head = my[k].e;
                    break;
                }
            }
        }
        
        cout << endl;
    }

    return 0;
}
