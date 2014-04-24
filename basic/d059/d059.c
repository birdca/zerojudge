#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void power(int a, int b)
{
    int i;
    long long result = 1;

    for (i = 0; i < b; i++)
        result *= a;

    printf("%lld\n", result);
}

int main()
{
    int i;

    for (i = 1; i <= 4; i++)
    {
        int a, b;

        switch (i)
        {
            case 1:
                scanf("%d %d", &a, &b);
                power(a, b);
                break;
            case 2:
                scanf("%d", &a);
                printf("%.3f\n", sqrt((double) a));
                break;
            case 3:
                scanf("%d", &a);
                printf("%d\n", a > 0?a:-a);
                break;
            case 4:
                scanf("%d %d", &a, &b);
                srand(time(NULL));
                printf("%d\n", rand() % (b - a) + a);
                break;
        }
    }

    return 0;
}
