#include<stdio.h>
#include<stdlib.h>

struct node 
{
	struct node *prev;

	int data;

	struct node *next;

}; struct node *head=NULL,*temp=NULL;

struct node *insertion_at_first(struct node* head)
{
	struct node *ptr= (struct node*)malloc(sizeof(struct node));

	printf("Enter the new data");
	scanf("%d",&ptr->data);
	ptr->prev= NULL;
	ptr->next=NULL;

	head->prev = ptr;
	ptr->next = head;
	head= ptr;

	return head; 
}

void display (struct node* head)
{
	struct node* ptr;
	ptr = head;
	while (ptr)

	{
		printf("%d<=>",ptr->data);

		ptr = ptr->next;
	}

	printf("NULL");
}

struct node * first_node(struct node* head)

{
	struct node* ptr = (struct node*)malloc(sizeof(struct node));
	scanf("%d",&ptr->data);
	ptr->prev= NULL;
	ptr->next= NULL;
	head = ptr;
	return head;

}
 
struct node * create_node()
{
	struct node *ptr = NULL;
	int no=0;

	printf("Enter the amount of node \n");
	scanf("%d",&no);

	if(no == 0)
	{
		return head;
	}
	printf("\n Enter the 1 node ");
	head = first_node(head);
	temp = head;
	int i = 1;
	while(i<no)
	{
		ptr = (struct node*)malloc(sizeof(struct node));

		printf("Enter the %d node",i+1);
		scanf("%d",&ptr->data);
		ptr->prev = temp;
		temp->next = ptr;
		ptr->next = NULL;
		temp = ptr;
		i++;
	}
	return head;

}

struct node* insertion_at_end(struct node* head)
{
	struct node*ptr = (struct node*)malloc(sizeof(struct node));
	temp = head;
	printf("Enter the data you want to insert at the end");
	scanf("%d",&ptr->data);
	ptr->prev = NULL;
	ptr->next = NULL;

	while(temp->next)
	{
		temp = temp->next;
	}

	 temp->next = ptr;
	 ptr->prev = temp;
		return head;

}

struct node* insertion_at_middle(struct node* head)
{
	struct node * temp2;
	int pos=0,i=0;
	struct node* ptr = (struct node*)malloc(sizeof(struct node));

	printf("\nEnter The Position You want to add");
	scanf("%d",&pos);
	printf("\nEnter the DATA");
	scanf("%d",&ptr->data);
	ptr->prev = NULL;
	ptr->next = NULL;
	temp = head;
	while(temp!=NULL)
	{
		if(i == pos-2)
		{
			 temp2 = temp->next;
			 temp->next= ptr;
			 ptr->prev = temp;
			 ptr->next = temp2;
			 temp2->prev= ptr;
			 break;
		}

		temp = temp->next;

		i++;
	}
	return head;
}	

int main()
{	int choice =0;
	head = create_node();
	printf("\nHello Please choose from the given list ");
	display(head);
	printf("\n1.Insert At the beginning \n2.Insert At the End \n3. Display The DATA \n 4.Insert At middle");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:  head = insertion_at_first(head);
				display(head);
				break;
		case 2: insertion_at_end(head);
				display(head);
				break;
		case 4: insertion_at_middle(head);
				display(head);
				break;
		case 3: display(head);
				break;
		default: 
				puts("Wrong Input Try Again");
	}
}