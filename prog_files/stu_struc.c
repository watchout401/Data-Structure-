#include <stdio.h>
int main()
{
	struct marks
	{
		int sub[3];
		int total;
	}; struct marks student[3]= {45,67,81,0,75,53,69,0,57,36,71,0};
	
	struct marks total;
	int i,j;

	for (i=0 ; i<=2  ; i++)
	{
		for (j = 0; j<=2 ; j++)
		{
			student[i].total += student[i].sub[j];
			total.sub[j] += student[i].sub[j];
		}

		total.total += student[i].total;	
	}

	printf("student				total\n\n");
	for (i =0; i <=2; i++)
	{ 
		printf("student[%d]			%d\n",i,student[i].total);
		
	}

	for (j =0; j <=2; j++)
	{	
		printf("\nSubjects%d %d \n",j+1 , total.sub[j]);
	}


	printf("\nGrand total =  %d\n",total.total);
		
	
}