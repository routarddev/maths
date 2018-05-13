#include<stdio.h>

/*
 * Not computational efficient program to see if a number is prime or not.
*/

int main(void) {

     int number, index, aux, sum;

     do {
          printf("\n Enter a strictly positive number:\t");
          scanf("%d",&number);
     } while(number <= 0);

     printf("\n Let's see if %d is a prime number.\n", number);

     sum = 0;
     printf("\t Divisors: \t");
     for(index=1; index<=number; index++) {
          if(number % index == 0)
          {
               aux=index;
               sum=sum+aux;
               printf("%d, ", aux);
          }
     }

     printf("\n\n Sum of divisors of %d:\t %d\n", number, sum);

     if (sum > number + 1) printf("\n %d is not primer, because can be formed by multiplying two smaller natural numbers.\n\n", number);
     else printf("\n %d is prime, because is only divisible by %d and 1.\n\n", number, number);

     return 0;
}