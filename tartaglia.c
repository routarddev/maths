#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
 * Program to generate an N rows Triangle of Tartaglia,
 *  also known as Pascal's Triangle.
*/

int *vector( int);
int combinatorial( int, int);

int main(void)
{
	int *v, i, j, n;

	printf("\n Enter the number of rows you want to generate: \t");
	scanf("%d", &n);

	printf("\n\n");
	
	// We'll have N number of rows
	for(i=0; i<=n; i++)
	{
		// Save memory for the elements of the i-th. row
		v = vector(i+1);
		
		// Generate the elements of the i-th. row, that is, columns
		for(j=0; j<i+1; j++)
		{
			v[j] = combinatorial(i,j);
			printf(" %5d ", v[j]);
		}
		printf("\n");
		
		//Free memory for each item vector
		free(v);
	}
	printf("\n\n");
	
	return 0;
}


/* Function to calculate the combinations of (m, n). 
 * That is, to compute the number of ways to select m items out of n items.
*/
int combinatorial(int m, int n)
{
	int c;

	if(m==n) return 1;
	if(n==0 || m==0) return 1;
	c = ( combinatorial( m-1, n-1) + combinatorial( m-1, n) );

	return (c);
}


/* Function to save memory for the vector of integer values. */
int *vector( int f)
{
	int *vec;

	vec = (int *)malloc( f * sizeof( int ) );
	if( vec == NULL )
	{
		printf("\nOut of memory.\n\n");
		exit(1);
	}

	return (vec);
}

	
