#include<stdio.h>

 int main(int argc, char const *argv[])
{
	int arr[5];
	int *q = arr;

	printf("Enter the 5 array value\n");
	for(int i =0 ; i<5 ; i++){
		scanf("%d",&arr[i]);
	}

	for(int i =0 ; i<5 ; i++){
		printf("%d",i[q]);
	}

	printf("\n");

	for(int i =0 ; i<5 ; i++){
		printf("%p",&i[q]);
		printf("\n");
	}


	return 0;
}