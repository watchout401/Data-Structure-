//This program is for circular queue using array immplementation

#include<stdio.h>
#define n 5

int front =-1;
int last =-1;
int q[n];
void create_queue();
void delete_queue();
void display();

int main()
{
	int i,choice=0;

	while(i)
	{
	printf("\nEnter the choice-\t");
	printf("\n1.Enter the QUEUE \n2.Delete the QUEUE \n3.Display the QUEUE \n4.Exit");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 : create_queue();
				break;
		case 2 : delete_queue();
				break;
		case 3: display();
				break;
		case 4: 
				i=0;
				break;
		default: 
				printf("\nWrong input");
				break;
	}
		i++;
	}
}

void create_queue()
{
	if(front == -1 && last == -1)
	{
		front = last =0;
		printf("\nEnter the element");
	scanf("%d",&q[last]);

	last = (last+1)%n;
	}
	else if ((last+1)%n == front){
		printf("\nSry the Queue is full");
	}
	else {
	printf("\nEnter the element");
	scanf("%d",&q[last]);

	last = (last+1)%n;
	}

}

void delete_queue()
{
	int item=0;
	if(front == last)
	{
		puts("\nSorry the queue is empty");
	}

	else 

		item = q[front];

		printf("Deleted %d",item);

		front = (front+1)%n;
}

void display()

{
	int i = front;

	if(front ==-1 && last ==-1)
	{
		puts("\nQueue is empty");
	}
else{
	do 
	{
		printf("%d\t",q[i]);

		 i = (i+1)%n;

	}while(i!=last);
}
}

