#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int array[4] = {0};

    while (scanf("%d %d %d", &array[1], &array[2], &array[3]) != EOF)
    {
        int max = 1;
        int min = 1;
        int snd;
        int i;
        long long sum = array[1];
        int win;

        for (i = 2; i <= 3; i++)
        {
            sum += array[i];
            if (array[i] > array[max])
                max = i;
            else if (array[i] < array[min])
                min = i;
        }

        snd = 6 - max - min;
        if (sum - array[max] > array[max])
            win = snd;
        else
            win = max;

        cout << (win == 1?"A":win == 2?"B":"C") << endl;
    }

    return 0;
}
