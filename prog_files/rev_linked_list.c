#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *temp;
};struct node *ptr,*prev=NULL,*next,*head,*current;

void creation_of_list ()
{
	
	int input=0,i=0;
	printf("Enter the number of data u want to input\t");
	scanf("%d",&input);

	while(i<input)
	{
		ptr = (struct node*)malloc(sizeof(struct node));

		printf("Enter the DATA\t");
		scanf("%d",&ptr->data);
		ptr->temp = NULL;

		if(head == NULL){

			head = ptr;
			current= ptr;

		}

		else{

			current->temp= ptr;
			current = ptr;
		}

		i++;
	}

	
}



void display(){

	ptr = head;
	printf("List created\n");

	while(ptr!=NULL){

		printf("%d\t",ptr->data);
		ptr= ptr->temp;
	}

}

void rev_list()
{	

	
	
	while(head!=NULL)
	{
	next = head->temp;
	head->temp=prev;
	prev = head;
	head = next;
	}
	head = prev;
	
}


int main(){

	creation_of_list();
	display();
	rev_list();
	display();
}