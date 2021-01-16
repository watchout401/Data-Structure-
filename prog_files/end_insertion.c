// Insertion at the end of the node

#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int data;
	struct node *next;


}; 

struct node *ptr,*current,*head;
int i=0,entires=0; 
char choice;
int main()
{
	
	puts("Hello please choose the number of entires ");
	scanf("%d",&entires);

	while (i<entires){

	ptr=(struct node*)malloc(sizeof(struct node));

	puts("enter the data");
	scanf("%d",&ptr->data);
	ptr->next=NULL;

	if(head==NULL)

	{
		head = ptr;
		current = ptr;
	}

	else

		current->next=ptr;
		current=ptr;

	i++;

	}

	puts("Want to insert data at the end");
	scanf("%s",&choice);

	if(choice == 'Y'|| choice=='y'){

	ptr=(struct node*)malloc(sizeof(struct node));

	puts("enter the data");
	scanf("%d",&ptr->data);
	ptr->next=NULL;

	current->next=ptr;
	current=ptr;

	puts("Data inserted successfully ");

	while(head!=NULL)
	{
		printf("%d\t",head->data);
		head = head->next;
	}

	}

	else

		while(head!=NULL)
	{
		printf("%d\t",head->data);
		head = head->next;
	}



}


