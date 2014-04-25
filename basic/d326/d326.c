/**********************************************************************************/
/*  Problem: d326 "程式設計師的面試問題(二)" from 某科技公司的面試問題*/
/*  Language: C (624 Bytes)                                                       */
/*  Result: AC(0ms, 296KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2014-04-10 11:07:05                                         */
/**********************************************************************************/


#include <stdio.h>

/* set bit b to 1 */
int set_bit(int v, int b)
{
    return v | 1 << b;
}

/* set bit b to 0 */
int unset_bit(int v, int b)
{
    return v & ~(1 << b);
}

/* check_bit b is 1 or 0 */
int check_bit(int v, int a, int b)
{
    return v >> b & 1;
}

int main(void)
{
    int i, v, bit, isSet;

    while(scanf("%d %d %d",&v,&bit,&isSet)==3)
    {
        if(isSet)
            v = set_bit(v, bit);
        else
            v = unset_bit(v, bit);

        for(i=31;i>=0;--i)
            printf( "%d", check_bit(v, 32, i) );
        putchar('\n');
    }


    return 0;
}

