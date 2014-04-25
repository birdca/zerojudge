/**********************************************************************************/
/*  Problem: d299 "程式設計師的面試問題" from 某科技公司的面試問題*/
/*  Language: C (3731 Bytes)                                                      */
/*  Result: AC(0.3s, 248KB) judge by this@ZeroJudge                               */
/*  Author: birdca at 2014-03-30 13:21:36                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
    
    int F, O, R, T, Y, E, N, S, I, X;

    for (F = 0; F < 10; F++)
    {
        for (O = 0; O < 10; O++)
        {
            if (O == F)
                continue;
            for (R = 0; R < 10; R++)
            {
                if (O == F || F == R || O == R)
                    continue;
                for (T = 0; T < 10; T++)
                {
                    if (O == F || F == R || O == R || F == T || O == T || R == T)
                        continue;
                    for (Y = 0; Y < 10; Y++)
                    {
                        if (O == F || F == R || O == R || F == T || O == T || R == T || F == Y || O == Y || R == Y || T == Y)
                            continue;
                        for (E = 0; E < 10; E++)
                        {
                            if (O == F || F == R || O == R || F == T || O == T || R == T || F == Y || O == Y || R == Y || T == Y || F == E || O == E || R == E || T == E || Y == E)
                                continue;
                            for (N = 0; N < 10; N++)
                            {
                                if (O == F || F == R || O == R || F == T || O == T || R == T || F == Y || O == Y || R == Y || T == Y || F == E || O == E || R == E || T == E || Y == E || F == N || O == N || R == N || O == N || T == N || Y == N || E == N)
                                    continue;
                                for (S = 0; S < 10; S++)
                                {
                                    if (O == F || F == R || O == R || F == T || O == T || R == T || F == Y || O == Y || R == Y || T == Y || F == E || O == E || R == E || T == E || Y == E || F == N || O == N || R == N || O == N || T == N || Y == N || E == N || F == S || O == S || R == S || T == S || Y == S || E == S || N == S)
                                        continue;
                                    for (I = 0; I < 10; I++)
                                    {
                                        if (O == F || F == R || O == R || F == T || O == T || R == T || F == Y || O == Y || R == Y || T == Y || F == E || O == E || R == E || T == E || Y == E || F == N || O == N || R == N || O == N || T == N || Y == N || E == N || F == S || O == S || R == S || T == S || Y == S || E == S || N == S || F == I || O == I || R == I || T == I || Y == I || E == I || N == I || S == I)
                                            continue;
                                        for (X = 0; X < 10; X++)
                                        {
                                            if (O == F || F == R || O == R || F == T || O == T || R == T || F == Y || O == Y || R == Y || T == Y || F == E || O == E || R == E || T == E || Y == E || F == N || O == N || R == N || O == N || T == N || Y == N || E == N || F == S || O == S || R == S || T == S || Y == S || E == S || N == S || F == I || O == I || R == I || T == I || Y == I || E == I || N == I || S == I || F == X || O == X || R == X || T == X || Y == X || E == X || N == X || S == X || I == X)
                                                continue;
                                            if (F*10000+O*1000+R*100+T*10+Y + T*100+E*10+N + T*100+E*10+N == S*10000+I*1000+X*100+T*10+Y)
                                                printf("%d%d%d%d%d + %d%d%d + %d%d%d = %d%d%d%d%d\n", F, O, R, T, Y, T, E, N, T, E, N, S, I, X, T, Y); 
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}

