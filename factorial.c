#include<stdio.h>

/*
 * Program to calculate the factorial of a number using recursion
*/

double factorial(int);

int main(void) {

  int n;
  double result;

  do {
    printf("\n Program to calculate the factorial of a number.\n");
    printf("\n Enter a non-negative number:\t");
    scanf("%d", &n);
  } while( n < 0);

  result = factorial(n);
  printf("\n Factorial number of %d: \t %d! = %.0lf \n\n", n, n, result);

  return 0;
}


double factorial(int m) {
  if(m < 0) return -1; //This scenario is not actually possible
  if(m == 0) return 1;

  return ( factorial(m-1) * m);
}