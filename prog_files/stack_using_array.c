//Implimentation of Stack using array all operations 
#include<stdio.h>

//#define SIZE 10

void push(int,int);
void pop();
void display();
int top = -1;
int stack[0];

int main()
{
   int value, choice,SIZE;
   
   printf("\nEnter size of STACK:- ");
   scanf("%d",&SIZE);
   int stack_var[SIZE];
   *stack = *stack_var;
   
   while(1){
      printf("\n\n***** WELCOME TO MENU *****\n");
      printf("\nHow many elements you want to Enter?");
      printf("\n1. Push\n2. Pop\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
    case 1: printf("Enter the value to be insert: ");
       scanf("%d",&value);
       push(SIZE,value);
       break;
    case 2: pop();
       break;
    case 3: display();
       break;
    case 4: 
    printf("\n!!!Thank You , Have a Nice Day!!!");
    return 0;
    default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}
void push(int SIZE ,int value){
   if(top == SIZE-1)
      printf("\nStack is Full!!! Insertion is not possible!!!");
   else{
      top++;
      stack[top] = value;
      printf("\nInsertion success!!!");
   }
}
void pop(){
   if(top == -1)
      printf("\nStack is Empty!!! Deletion is not possible!!!");
   else{
      printf("\nDeleted : %d", stack[top]);
      top--;
   }
}
void display(){
   if(top == -1)
      printf("\nStack is Empty!!!");
   else{
      int i;
      printf("\nStack elements are:\n");
      for(i=top; i>=0; i--)
    printf("%d\n",stack[i]);
   }
}