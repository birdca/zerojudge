#include <iostream>
#include <cstdio>

using namespace std;

bool check0(int x1, int y1, int x2, int y2)
{
    if (x1 + y1 + x2 + y2 == 0)
        return true;
    return false;
}

void solve(int &dx, int &dy)
{
    if (dx != 0 && dy != 0)
    {
        if (dx > 0 && dy > 0)
        {
            dy -= dx;
            dx = 0;
        }
        else if (dx < 0 && dy > 0)
        {
            dy += dx;
            dx = 0;
        }
        else if (dx < 0 && dy < 0)
        {
            dy -= dx;
            dx = 0;
        }
        else if (dx > 0 && dy < 0)
        {
            dy += dx;
            dx = 0;
        }
    }
    else if (dx == 0)
        dy = 0;
    else if (dy == 0)
        dx = 0;
}

int main()
{
    int x1, y1, x2, y2;

    while (scanf("%d %d %d %d", &x1, &y1, &x2, &y2) != EOF && !check0(x1, y1, x2, y2))
    {
        int cnt = 0;
        int dx = x2 - x1;
        int dy = y2 - y1;

        while (dx != 0 || dy != 0)
        {
            ++cnt;
            solve(dx, dy);
        }
        cout << cnt << endl;
    }

    return 0;
}
