#include<stdio.h>
#include<stdlib.h>

struct 
{
	char *engin;
	char *type;
	
}car1,car2;

int main()
{
	printf("Enter the car Engine name\t");
	scanf("%s",car1.engin);

	printf("Enter the car Type \t");
	scanf("%s",car1.type);


	//car1.engin = "check";
	//car1.type = "check2";
	printf("Your information are ");
	printf("Engin name --> %s",car1.engin);
	printf("Engine Type -->%s",car1.type);
}