//8. Write a function to add two matrices of order m x n. also write the main program which can read the values of the matrices and print the resultant matrix.
#include <stdio.h>
int rows , columns ; 
void matrixAddition(int mat1[100][100] , int mat2[100][100] , int mat3[100][100])
{
	int i,j;
	for (i =0 ; i<rows ; i++)
	{
		for (j =0 ; j<columns ; j++)
		{
			mat3[i][j] = mat1[i][j]+mat2[i][j];
		}
	}
	return ;
}

int main()

{
	int matrix1[100][100],matrix2[100][100],matrix3[100][100],i,j;
	printf("Enter the number of rows\n");
	scanf("%d",&rows);
	printf("Enter the number of columns\n");
	scanf("%d",&columns);
	printf("Enter the input for first matrix: \n");
	for (i = 0; i < rows; i++)
	{
		printf("Enter the elemnts %d row \n",i+1);
		for(j=0 ; j<columns ; j++)
		{
			scanf("%d",&matrix1[i][j]);
		}
	}

	printf("Enter the 2nd Matrix \n");
	for (i = 0; i < rows; i++)
	{
		printf("Enter the elemnts of %d row \n",i+1);
		for(j=0 ; j<columns ; j++)
		{
			scanf("%d",&matrix2[i][j]);
		}
	}

	matrixAddition(matrix1,matrix2,matrix3);
	printf("After addtion of the two matrix\n");
	for (i = 0; i < rows; i++)

	{	for(j=0 ; j<columns ; j++)
		{
			printf("%d\t",matrix3[i][j]);
		}
		printf("\n");
	}
	return 0;
}