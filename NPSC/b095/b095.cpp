#include <iostream>
#include <cstdio>

using namespace std;

int MAX(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;
    int max = 0;
    int i;

    while (scanf("%d %d", &a, &b) != EOF)
    {
        int correct = 0;
        int err = 0;

        max = MAX(a, b);
        for (i = 1; i <= 30; i++)
        {
            int input;

            scanf("%d", &input);
            if (input == max && err < 3)
                ++correct;
            else if (input != 0)
                ++err;
        }
        if (correct)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}
