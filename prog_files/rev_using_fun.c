//Reverse a given integer using functions 
#include <stdio.h>

int rev_num(int num)
{
	int temp =0 , rev_num =0 ;
	while (num != 0 )
	{
		temp = num % 10 ;
		rev_num = rev_num *10 + temp;
		num /= 10;
	}
	return rev_num ; 	
}

int main()
{	int org_num =0;
	printf("Enter a number to reverse\n");
	scanf("%d",&org_num);

	printf("Your Reverse of %d number is - %d \n",org_num ,rev_num(org_num) );
}