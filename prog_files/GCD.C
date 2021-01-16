/*2. Write a function to find the GCD of two integers.
Using that function write a program to find the GCD of three integers.*/
#include <stdio.h>

int find_small (int num1 ,int num2 )
{
	if (num1>num2)
	{
		return num2;
	}
	else
		return num1;
}

int find_GCD (int num , int num3 )
{
	int i,smallest = 0;
	smallest = find_small(num , num3);

	for (i=2 ; i<= smallest ; i++)
	{
		if (num % i == 0 && num3 % i == 0 )
		{
			return i ;
		}
	}	 
}

int main()
{
	int num1,num2,num3 ; 
	
	printf("Enter 1st number  - ");
	scanf("%d",&num1);
	printf("Enter 2nd number  - ");
	scanf("%d",&num2);
	printf("Enter 3rd number  - ");
	scanf("%d",&num3);

	printf("The GCD of %d,%d,%d is - %d \n",num1,num2,num3, find_GCD(find_GCD(num1 , num2),num3) );	
}
