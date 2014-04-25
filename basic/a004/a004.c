/**********************************************************************************/
/*  Problem: a004 "文文的求婚"                                               */
/*  Language: C (295 Bytes)                                                       */
/*  Result: AC(0ms, 276KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2013-11-23 10:35:28                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
  int year = 0;

  while (scanf("%d", &year) != EOF)
  {
    if (year <= 0)
      return -1;
    
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
      printf("閏年\n");
    else
      printf("平年\n"); 
  }
  
  return 0;
}
