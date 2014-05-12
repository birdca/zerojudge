#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    int array[26] = {0, 1, 2, 3, 0, 1, 2, 0, 0, 2, 2, 4, 5, 5, 0, 1, 2, 6, 2, 3, 0, 1, 0, 2, 0, 2};  // A-Z
    char name[32] = {0};

    cout << setw(9) << "" << "NAME" << setw(21) << "" << "SOUNDEX CODE" << endl;
    while (scanf("%s", name) != EOF)
    {
        int len = strlen(name);
        int i;
        int count = 35 - 9 - len;
        int ans[4] = {0};
        int cnt = 0;
        int tmp = 0;
        int last = array[name[0] - 'A'];

        for (i = 1; i < len && cnt < 3; i++)
        {
            if ((tmp = array[name[i] - 'A']) != 0 && tmp != last)
            {
                ans[cnt++] = tmp;
                last = tmp;
            }
            else
                last = tmp;
        }

        for (i = cnt; i < 3; i++)
            ans[i] = 0;

        cout << setw(9) << "" << name << setw(count) << name[0] << ans[0] << ans[1] << ans[2] << endl; 
    }
    cout << setw(19) << "" << "END OF OUTPUT" << endl;

    return 0;
}
