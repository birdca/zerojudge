/**********************************************************************************/
/*  Problem: a003 "兩光法師占卜術"                                         */
/*  Language: C (493 Bytes)                                                       */
/*  Result: AC(0ms, 288KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2013-11-23 10:13:15                                         */
/**********************************************************************************/


#include <stdio.h>

int main()
{
  int mon = 0;
  int day = 0;
  int value = 0;


  while (scanf("%d %d", &mon, &day) != EOF)
  {
    if (mon <= 0 || mon > 12 || day <= 0 || day > 31)
      return -1;
    
    value = (mon * 2 + day) % 3;
    switch (value)
    {
      case 0:
        printf("普通\n");
        break;

      case 1:
        printf("吉\n");
        break;

      case 2:
        printf("大吉\n");
        break;
    }
  }
  
  return 0;
}
