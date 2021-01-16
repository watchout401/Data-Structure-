//11. Write a program to print a line of characters in reverse order using recursion.
#include <stdio.h>
void rev_string ()
{
	char ch ; 
	scanf("%c",&ch);
	if (ch!='\n')
	{
		rev_string();
		printf("%c",ch);

	}

}
int main()
{
	printf("Enter a String\n");
	rev_string();

}