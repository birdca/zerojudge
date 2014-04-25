/**********************************************************************************/
/*  Problem: d584 "技能點數skill" from jack1                                  */
/*  Language: C (567 Bytes)                                                       */
/*  Result: AC(0ms, 304KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-03-29 18:53:53                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    int a, b;
    int skill = 0;

    while (scanf("%d %d", &a, &b) != EOF)
    {
        skill = 0;
        if (a == 0)
            skill = 0;
        else
        {
            if (a == 2)
                skill += (b-8)*3 + 1;
            else
                skill += (b-10)*3 + 1;

            if (b >= 30)
                ++skill;
            if (b >= 70)
                ++skill;
            if (b >= 120)
                skill += 3;
        }
        printf("%d\n", skill);
    }

    return 0;
}

