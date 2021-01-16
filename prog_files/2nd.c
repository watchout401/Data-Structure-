#include<stdio.h>

void vailtanh(float x){

	float tanx = 0;
	int i , j ;
	float t,u;

	for (i=0;i<20;i++)
	{
		u=1;

		for (j = 0; j < 2*i; j++)
		{
			u=u*x;
		}

		t=u/(2*i+1);
		tanx = tanx+t;
	}

	printf("atanh(%f)=%f",x,tanx);
}

int main()
{
	float x;
	printf("Enter the value of x:- \t");
	scanf("%f",&x);
	vailtanh(x);
	return 0;
}