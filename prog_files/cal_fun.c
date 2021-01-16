/*Write a menu – based C program to perform addition, subtraction, multiplication
and division of two numbers. Also keep provision in the menu to quite the program.*/
#include<stdio.h>
float a=0,b=0 ;

float add ( a , b)
{
	return a+b ;
}
float sub ( a , b)
{
	return a-b;
}
float mul ( a , b)
{
	return a*b;
}
float div ( a , b)
{
	return a/b;
}

int main()
{	
	float num1,num2;
	int val;
	printf("Enter two numbers\n");
	scanf("%f %f",&num1,&num2);
	printf("Choose the operation\n");
	printf("1.Addition\n");
	printf("2.Substration\n");
	printf("3.Multiplication\n");
	printf("4.division\n");
	printf("5.Quite\n");
	scanf("%d",&val);
	switch (val)
	{
	case 1 : 
		printf("After Adding your numbers = %f\n",add(num1,num2));
		break;
	case 2:
		printf("After Substracting of your numbers = %f \n",sub(num1,num2));
		break;
	case 3:
		printf("After Multiplying your numbers = %f\n",mul(num1,num2));
		break;
	case 4:
		printf("After Dividing your numbers = %f\n",div(num1,num2));
		break;
	case 5:
		printf("Exiting Program\n");
		break; 
	default:
		printf("Please choose a valid operation \n");
	}

}