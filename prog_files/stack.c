
#include <stdio.h>
#define N 5


int top = -1 ;
int stack[N];	
int num;

void Push()
{	
	int push_value;
	if(top == num-1)
	{
		printf("\nOverflow condition");

	}
	
	else 
	{	
		puts("\nEnter the Push value :-");
		scanf("%d",&push_value);
		top++;
		stack[top] = push_value;
	}

}

void Pop()
{	
	int pop_value = 0;
	if(top == -1)
	{
		printf("\nUnderflow condition");
	}

	else
	{	
		pop_value = stack[top];
		top--;
		printf("\nThe Poped Value is %d",pop_value);
	}
}

void Peek()
{
	int value = 0;

	value = stack[top];
	printf("The topmost value is -- %d",value);
}

void display()
{
	int i,store;
	if(top == -1)
	{
		puts("No value in the stack");
	}

	store = top;
	while(i<num)
	{
		printf("%d\t",stack[store]);
		store--;
		i++;
	}
}




void main()
{
	int i=1,choice = 0;

	printf("How many value you want to enter -\n");
	scanf("%d",&num);
	while(i)
	{
		printf("\nChoose any of the following");
		printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case  1 : Push();
						break;
			case 2: Pop();
					break;
			case 3: Peek();
					break;
			case 4: display();
					break;
			case 5: i =0 ;
					break;
			default : puts("Wrong Choice Entered");
						break;
		}
	}
	

}