//Write a programe to sort an list of array

#include<stdio.h>

int input(int limit)
{
	int num[100] ;
	for (int i = 0; i <limit; ++i)
	{
		scanf("%d",&num[i]);
	}

	return num;
}

int main()
{
	int limit =0;
	printf("How many Elements you want to enter : -\n");
	scanf("%d",&limit);
	printf("Please enter an list of arrays:- ");
	input(limit);

}