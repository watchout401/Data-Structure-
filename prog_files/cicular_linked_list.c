#include<stdio.h>
#include<stdlib.h>
// This is the program of circular linked list 
struct node 
{
	int data;
	struct node *next;
};struct node* ptr = NULL , *head=NULL,*tail=NULL ;

struct node* insertion()
{	
	int i =0,num=0;
	printf("Enter the number of data you want to add");
	scanf("%d",&num);

	while(i<num)
	{	
		if(num<i){
			printf("Overflow !! ");
			break;		}

		ptr =(struct node*)malloc(sizeof(struct node ));
		printf("Enter the %d data ",i+1);
		scanf("%d",&ptr->data);
		ptr->next = NULL;

		if(tail==NULL)
			{
				tail = ptr;
				head = ptr; 
			}

		else
			{
				tail->next = ptr ; 
				tail = ptr;
			}
		i++;

	}

	tail->next = head; // Now it is pointing to the first node , so it become a circular node  
	return head;
}


void display(struct node* head)
{
	struct node *trav = NULL;
	trav = head;
	do{
		
		printf("%d\t",trav->data);
		trav = trav->next;
	

	}while(trav!=tail->next);
}

int main()
{
	head = insertion();
	display(head);
}