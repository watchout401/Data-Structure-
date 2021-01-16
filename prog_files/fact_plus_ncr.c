// Factorial of the given number and find its nCr

#include <stdio.h>

int fact_counter (int num )

{	int fact=1;

	for (int i =1 ; i <= num ; i++)
		{
			fact = fact * i ;
		}

	return fact ;
}

int ncr (int r_val , int num )

{	
	return (fact_counter(num ) / (fact_counter(num - r_val)*fact_counter( r_val))) ;
}

int main()

{	int num =0 , fact =1  ,r =1 , nCr =1  ;
	printf("Enter a number to find its factorial\n");
	scanf("%d",&num);
	printf("Enter the value of r \n");
	scanf("%d",&r);

	 nCr = ncr(r,num);

	printf ("Factorial of the number is - %d\n", fact_counter(num));

	printf("nCr value of %dC%d number is - %d \n", num ,r  ,nCr);
}