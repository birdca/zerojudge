/**********************************************************************************/
/*  Problem: a290 "新手訓練系列 ~ 圖論" from 新手訓練系列 ~ 3       */
/*  Language: CPP (970 Bytes)                                                     */
/*  Result: AC(0.3s, 6.8MB) judge by this@ZeroJudge                               */
/*  Author: birdca at 2014-04-24 23:24:48                                         */
/**********************************************************************************/



#include <iostream>
#include <cstdio>
#include <queue>

#define nMAX 1024

using namespace std;

bool DFS(queue<int> city[nMAX], bool pass[nMAX], int a, int b)
{
    if (pass[a])
        return false;

    pass[a] = true;
    while (!city[a].empty())
    {
        if (city[a].front() == b)
            return true;
        if (DFS(city, pass, city[a].front(), b))
            return true;
        else
            city[a].pop();
    }

    return false;
}

int main()
{
    int n, m;
    int i;

    while (scanf("%d %d", &n, &m) != EOF)
    {
        int a, b;
        queue<int> city[nMAX];

        for (i = 0; i < m; i++)
        {
            scanf("%d %d", &a, &b);
            city[a].push(b);
        }
        scanf("%d %d", &a, &b);

        bool pass[nMAX];
        for (i = 1; i <= n; i++)
            pass[i] = false;
        printf("%s\n", DFS(city, pass, a, b)?"Yes!!!":"No!!!");
    }

    return 0;
}
