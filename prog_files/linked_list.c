// Linked list first program

#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int data;

	struct node *link;
};


int main()
{
	struct node *head = malloc(sizeof(struct node));
	head -> data = 45;
	head ->link=NULL;

	struct node *sec_head = malloc(sizeof(struct node));
	{
		
		sec_head-> data = 55;
		sec_head->link=NULL;
		head->link=sec_head;

		
	}

	sec_head = malloc(sizeof(struct node));
	{
		sec_head->data=65;
		sec_head->link=NULL;
		head->link->link=sec_head;	
	}

	if (head == NULL)
	{
		printf("The list is empty");
	}

	else {


	struct node *ptr=NULL;
	ptr =head;

	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);

		ptr = ptr->link;
	}
 }
}
