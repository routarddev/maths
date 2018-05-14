/************************************************************/
/* name: Fibonacci                                          */
/*                                                          */
/* author: routarddev                                       */
/*                                                          */
/* Program to calculate iteratively N elements of the       */
/*  Fibonacci function: F(n) = F(n-1) + F(n-2)              */
/************************************************************/

#include<stdio.h>
#include<math.h>

#define MAX_VALUES 20000

int main(void)
{
  int i, n_values;
  long double x0, x1, a, b;

  printf("\n Enter the two first numbers of the sequence (x0 x1):\t");
  scanf("%Lf %Lf", &x0, &x1);

  printf(" Enter how many values of the sequence do you want (MAX: %d):\t", MAX_VALUES);
  scanf("%d", &n_values);

  if (n_values > MAX_VALUES) n_values = MAX_VALUES;
  printf("\n %d values of the Fibonacci sequence:\n\n", n_values);

  //We calculate from two to two:
  printf("  x0 = %0.Lf\n  x1 = %0.Lf\n", x0, x1);

  for(i=2; i < n_values; i++)
  {
    a = x0 + x1;
    b = (x1 + a);
    x0=a;
    x1=b;

    printf("  x%d = %0.Lf \n  x%d = %0.Lf \n", i, a, i+1, b);
    ++i;                       
  }

  return 0;
}


