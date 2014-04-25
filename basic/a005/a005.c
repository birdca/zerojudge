/**********************************************************************************/
/*  Problem: a005 "Eva 的回家作業" from POJ                                  */
/*  Language: C (495 Bytes)                                                       */
/*  Result: AC(0ms, 296KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2013-11-23 11:17:23                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
  int lines = 0;
  long fst = 0;
  long snd = 0;
  long thd = 0;
  long forth = 0;

  scanf("%d", &lines);
  while (scanf("%ld %ld %ld %ld", &fst, &snd, &thd, &forth) != EOF)
  {
    long long minus = snd - fst;
    long long fifth = 0;
    
    if (thd - snd == minus)
      fifth = forth + minus;
    else
      fifth = forth * (snd / fst);
      
    printf("%ld %ld %ld %ld %lld\n", fst, snd, thd, forth, fifth);
  }
  
  return 0;
}
