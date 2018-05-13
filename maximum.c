#include<stdio.h>

/**
	Simple game to find the largest of three introduced numbers.
*/
void main(void) {
	int a,b,c,max;

	printf("\n\nThis program finds the max of three numbers.\n");
	printf("Enter three integers:\t");
	scanf("%d %d %d", &a, &b, &c);

	printf("Introduced numbers: %d %d %d", a, b, c);

	if (a>=b) max=a;
	else max=b;

	if (max < c) max = c;

	printf("\nThe largest number is: %d\n\n", max);
}
