#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char array[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char str[1024] = {0};
    int size = strlen(array);

    while (gets(str) != '\0')
    {
        int i;
        int len = strlen(str);

        for (i = 0; i < len; i++)
        {
            if (str[i] == ' ')
            {
                cout << " ";
                continue;
            }

            char *ptr = strchr(array, str[i]);
            cout << *(--ptr);
        }
        cout << endl;
    }

    return 0;
}
