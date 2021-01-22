//Implimentation of Queue using array 

#include<stdio.h>
//#define SIZE 8

void enQueue(int, int);
void deQueue();
void display();
int queue[0];

int front = -1, rear = -1;

int main()
{
   int value, choice,SIZE;

   printf("\nEnter size of STACK:- ");
   scanf("%d",&SIZE);
   int queue_var[SIZE];
   *queue = *queue_var;
   
   while(1) {
      printf("\n\n***** WELCOME TO MENU *****\n");
      printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);

      switch (choice) {
	 case 1: printf("Enter the value to be insert: ");
		       scanf("%d",&value);
		       enQueue(value,SIZE);
		       break;

	 case 2: deQueue();
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
void enQueue(int value, int SIZE){
   if (rear == SIZE-1)
      printf("\nQueue is Full!!! Insertion is not possible!!!");
   else {
      if(front == -1)
	 front = 0;
      rear++;
      queue[rear] = value;
      printf("\nInsertion success!!!");
   }
}
void deQueue() {
   if (front == rear)
   {

      printf("\nDeleted : %d", queue[front]);
      printf("\nQueue is Empty!!! Deletion is not possible!!!");
      front = rear = -1;
   }
   else{
      printf("\nDeleted : %d", queue[front]);
      front++;
     
   }
}
void display() {
   if (rear == -1)
      printf("\nQueue is Empty!!!");
   else {
      int i;
      printf("\nQueue elements are:\n");
      for(i=front; i<=rear; i++)
	  printf("%d\t",queue[i]);
   }
}