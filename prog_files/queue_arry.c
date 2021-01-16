// This program is for queue implementing in array

#include<stdio.h>
#define total_num 5

int front=-1;int rear=-1;
int queue[total_num];


void creation_of_queue()
{
	rear++;
	printf("Enter the value");
	scanf("%d",&queue[rear]);

}

int  delete_from_queue()
{
	int element =0;

	element = queue[front];
	front++;
	return element;
}
void display()
{
	for(int i = front ; i<=rear ; i++)
		{
			printf("%d \t",queue[i]);
		}
}

void front_ele()
{
	printf("Your Front element is -- %d",queue[front]);
}
int main ()
{
	int ele =0,choice =0 ,x=total_num,i=1;
	puts("Enter the choice-- \t ");
while(i)
{
	printf("\n1.Input Value \n2.Delete Value \n3.Display \n4.Front Element \n5.Exit \n");
	scanf("%d",&choice);



	switch(choice)
	{
		case 1: 
					if(rear == (x-1))
					{
						printf("\n!!! Sorry the Queue is full\t Overflow !!!");

					}

					else 
					{		
							if(front == -1)
							{
								front++;

							} 
							
								creation_of_queue();
					}
				break;

		case 2:
					if(rear==-1 || front>rear)
					{
						printf("!!! Queue is Empty \t Underflow !!!");
					}

					else 
					{
						ele = delete_from_queue();
						printf("\nElement Deleted %d",ele);

					}
				break;
		case 3:
					if(rear == -1 || front == -1)
					{
						printf("\nThe Queue is Empty");
					}

					else 
					{
						display();
					}
				break;
		case 4:
				front_ele();
				break;
				
		case 5:
				i=0;
				break;
		default:
				printf("\nWrong Option , Try again");
	}
}

}
