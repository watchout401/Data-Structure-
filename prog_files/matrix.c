#include <stdio.h>

int main()
{
    int n,n1, i ,j , arr1[100] ,arr2[100] ; 
    int arr3[200],total_size =0 , small ;
    printf("\nEnter the number of elements you want to input:- ");
    scanf("%d",&n);
    printf("Enter first array :- ");
    for (i =0 ; i<n ; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter the number of elements you want to input:- ");
    scanf("%d",&n1);
    printf("Enter Second array :- ");
    for (i =0 ; i<n1 ; i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    for ( j=0 ; j<n ; j++)
    {
        arr3[j] = arr1[j];
    }
    total_size = n+n1;

    for (i=0,j=n ; j < total_size && i<n1;i++, j++)
    {
        arr3[j] =   arr2[i];
    }
    
    printf("\nBefor Sorting two arrays:-\n");

    for (i=0; i<total_size; i++)
    {
        printf("%d\t",arr3[i]);
    }
    
    printf("\nAfter sorting two Arrays :- \n ");
    
    for (i=0; i<total_size; i++)
    {
        for (j=i+1; j<total_size; j++)
        {
            if(arr3[j]<arr3[i])
            {
                small=arr3[i];
                arr3[i]= arr3[j];
                arr3[j]=small;
            }
            
        }
    }
    for (i=0; i<total_size; i++)
    {
        printf("%d\t",arr3[i]);
    }
    
    printf("\n");
}