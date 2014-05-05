#include <iostream>
#include <cstdio>

#define nMAX 1024*1024

using namespace std;

void solve(int array[], int input)
{
    array[input] = array[input - array[input - 1]] + array[input - 1 - array[input - 2]];
}

int main()
{
    int input;
    int array[nMAX] = {0};
    array[0] = 1;
    array[1] = 1;
    array[2] = 1;

    for (input = 3; input <= 1000000; input++)
        solve(array, input);
    while (scanf("%d", &input) && input != 0)
        cout << array[input] << endl;

    return 0;
}
