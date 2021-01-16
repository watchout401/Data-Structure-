#include <stdio.h>
 int main()
{
	int arr[100],i,num=0;
	printf("How many number you want to type\n");
	scanf("%d",&num);
	printf("Enter a list of numbers\n");
	for (int i = 0; i<num; ++i)
	{
		scanf("%d",&arr[i]);
	}

	printf("Your Enter list of numebers are\n");
	for (int i = 0; i < num; ++i)
	{
	     printf("%d ,",arr[i]);
	}
	
	printf("\nOdd index numbers are\n ");
	printf("--------------------------\n");
	
	for (i =1 ; i<num ; i++)
	{
	    printf("%d ",arr[i]);
	    i++;
	}
	
	return 0;
	
}