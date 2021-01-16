#include <stdio.h>
#include <string.h>

void reverse_String(char [], int, int);
 
int main()
{
  	char Str[100], temp;
  	int i, j, len;
 
  	printf("\n   Please Enter any String :  ");
  	scanf("%s",Str);
  	
  	len = strlen(Str);
  	reverse_String(Str, 0, len -1);
 
  	printf("\n   String after Reversing = %s\n\n", Str);
  	
  	return 0;
}

void reverse_String(char Str[], int i, int len)
{
	char temp;
	temp = Str[i];
	Str[i] = Str[len - i];
	Str[len - i] = temp;
	
  	if (i == len/2)
  	{
		return;
  	}
  	reverse_String(Str, i + 1, len);
}