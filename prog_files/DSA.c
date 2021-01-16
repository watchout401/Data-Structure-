// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    
    int n[100],size,pos,element;
    
    printf("Hello world");
    printf("\nenter the size of the array");
    scanf("%d", &size);
    printf("\nEnter the elements of the array");
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&n[i]);
    }
    printf("\nenter the position U want to insert");
    scanf("%d",&pos);
    printf("\nenter the element to be inserted ");
    scanf("%d",&element);
    if(pos<=0 || pos>size)
    {
        printf("\nInvalid position entered ");
        
    }
    
    else 
    {
        n[size]=n[pos-1];
        n[pos-1] = element;
        size++;
    
    
     for(int i=0 ; i<size ; i++)
    {
        printf("%d",n[i]);
    }
    
    }
    
    
    return 0;
}