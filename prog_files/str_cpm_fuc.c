/*4. Write a function to compare two strings S1 and S2 and return the result 0, 1, -1 
if (S1=S2), (S1>S2) and (S1<S2)respectively.*/
#include <stdio.h>

int len_count(char string[])
{	int count = 0;
	while (string[count]!= '\0')
	{
		count ++; 
	}
	return count ; 
}

int len_str_cmp(char str1[] , char str2[])
{
	if (len_count(str1) == len_count(str2))
	{
		return 0;
	}
	else if (len_count(str1)>len_count(str2))
	{
		return 1;
	}
	else
		return -1;
}

int main()
{	char str1 [100],str2[100];
	printf("Enter 1st string = ");
	fgets(str1,100 , stdin);
	printf("Enter 2nd string = ");
	fgets(str2 , 100 ,stdin);
	printf("After comparing we got = %d\n",len_str_cmp(str1,str2));
	
}