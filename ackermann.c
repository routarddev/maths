#include<stdio.h>
#include<math.h>

/**    
    Simple program to calculate the Ackerman number of to positive numbers.
    For further information: https://en.wikipedia.org/wiki/Ackermann_function
*/

int ACK(int , int);

int main(void)
{
  int m, n, ack;

  do {
       printf("Enter two positive numbers:\t");
       scanf("%d %d", &m, &n);

       if(m<0 || n<0) printf("\nThese numbers have to be positive!!!\n");
  } while(m<0 || n<0);

  ack=ACK(m,n);

  printf("\nThe corresponding Ackerman number of %d %d is: %d\n", m , n, ack);

  return 0;
}


/*
 * Function:  ACK 
 * --------------------
 * Calculates the Ackermann number of two introduced values
 *
 * m: one integer value
 * n: the other integer value
 *
 * returns: the Ackermann number of m and n, A(m, n)
*/
int ACK(int m, int n)
{
  int a;

  if(m==0) a=n+1;
  else if(n==0) a=ACK(m-1, 1);
  else a=ACK(m-1,ACK(m, n-1));

  return (a);
}