#include<stdio.h>

int main()
{
	int i,size,arr[size];
	printf("Enter the size of the array : \n");
	scanf("%d",&size);
	printf("Enter the elements of the array :\n");
	for ( i = 0; i < size; i++)
    {
		scanf("%d", &arr[i]);
	}
	printf("Array before Sorting is : \n");
	for ( i = 0; i < size; i++)
    {
		printf("%d\t", arr[i]);
	}
	return 0;
}