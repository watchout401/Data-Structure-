#include<string.h>
#include <stdio.h>
 
int  main()
{
    char str1[100],str2[100];
    int i,flag=1,len1,len2;
 
    printf("Enter string str1 :- ");
    scanf("%s",str1);
    
    printf("Enter string str2:- ");
    scanf("%s",str2);
    
    len1=strlen(str1);
    len2=strlen(str2);
 
    if(len1==len2)
    { 
    	for(i=0;i<len1;i++)
    	{
        	if(str1[i]!=str2[i])
        	{
             flag=0;
                 break;
 }
        }
    }
 
    else
    {
    	flag=0; 
    } 
 
    if(flag==1)
    {
        printf("The two string are EQUAL!!!\n");
        printf("%s are equal %s",str1,str2);
    }
 
    else
    {
        printf("The two string are NOT EQUAL!!!\n");
        printf("%s not equal %s",str1,str2);
    }
    printf("\n");
}
