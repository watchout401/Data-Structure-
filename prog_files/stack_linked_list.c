#include<stdio.h>
#include<stdlib.h>

struct node_stack 
{	
	int data ;
	struct node_stack *next;
	
};struct node_stack *ptr , *top=0;

void creation_of_stack_node( int data )
{
	ptr = (struct node_stack *)malloc(sizeof(struct node_stack));
	ptr->data = data;
	ptr->next = top;
	top = ptr;
}

struct node_stack *pop(struct node_stack *top)
{
	struct node_stack *temp;

	temp = top ; 
	top = top->next ; 
	free(temp);
	return top;
}

int peek()

{	int item=0;
	item = top->data;
	return item;

}

void display(struct node_stack *top)
{
	while(top!=0)
	{
		printf("%d\t",top->data);
		top = top->next;
	}
}

void main()
{
	int i =0,num=0,val,top_value=0;
	printf("\nEnter the number of value you want to enter ");
	scanf("%d",&num);

	while(i<num)
	{
		printf("\nEnter the %d value",i+1);
		scanf("%d",&val);
		creation_of_stack_node(val);
		i++;
	}

	display(top);
	top = pop(top);
	printf("\n");
	display(top);
	top_value = peek();
	printf("\nThe TOP value is -%d",top_value);
}

 