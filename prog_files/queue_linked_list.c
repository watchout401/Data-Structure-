//This is a queue program using linked list 

#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data ;
	struct node *next;
};struct node *temp=0, *ptr,*front=0;

void create_list(int num)
{
	int i=0;
	while(i<num)
	{
		ptr = (struct node*)malloc(sizeof(struct node));

		printf("Enter the %d node ",i+1);
		scanf("%d",&ptr->data);
		ptr->next = 0;
		if(front == 0)
		{
			front = ptr;
			temp = ptr;
		}

		temp->next = ptr;
		temp = temp->next;
	i++;
	}
}

void display()
{
	 ptr = front; 
	while(ptr)
	{
		printf("%d \t",ptr->data);
		ptr = ptr->next;
	}
}

int main()
{
	int num=0;
	printf("How many nodes you want to enter - \t");
	scanf("%d",&num);

	create_list(num);
	display();
}