/**********************************************************************************/
/*  Problem: a006 "一元二次方程式"                                         */
/*  Language: C (520 Bytes)                                                       */
/*  Result: AC(0ms, 324KB) judge by this@ZeroJudge                                */
/*  Author: birdca at 2013-11-23 18:59:53                                         */
/**********************************************************************************/


#include <stdio.h>
#include <math.h>

int main()
{
  double a = 0;
  double b = 0;
  double c = 0;

  while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
  {
    double sum = b*b - 4*a*c;
    
    if (sum < 0)
      printf("No real root\n");
    else if (sum == 0)
      printf("Two same roots x=%d\n", (int) -b/(2*(int)a));
    else
    {
      int sq = sqrt(sum);
      printf("Two different roots x1=%d , x2=%d\n", ((int) -b+sq)/(2*(int) a), ((int)-b-sq)/(2*(int) a));
    }
  }
  
  return 0;
}
