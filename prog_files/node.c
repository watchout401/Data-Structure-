 #include<stdio.h>
#include<stdlib.h>
//#include<malloc.h>
struct node
   {
	int data;
	struct node *next;
   };
struct node *head,*newnode,*temp;
void create_list();
void insert_at_beginning(int data);
void insert_at_end(int data);
void insert_at_any_position(int data,int v);
void delete_at_beginning();
void delete_at_end();
void delete_at_any_position();
void display();
int get_length();
void reverse_list();
int main()
{
    int data,v,select;   
    printf("Creation of Linked List: \n");
	create_list();
	printf("The Linked List is :- \n");
	display();
	v=get_length();
	do
	{
		printf("Choose from below:\n1.Insert\t2.Delete\t3.Display\t4.Reverse\n");
		scanf("%d",&select);
		{
			switch(select)
			{
				case 1:
				{
					int x;
					printf("Select any one:\n1.Insert at beginning \n2.Insert at end \n3.Insert at any position \n ");
					scanf("%d",&x);
					switch(x)
					{
						case 1:
							{
								printf("\nEnter data to insert at beginning of the list: \n");
    							scanf("%d", &data);
	  							insert_at_beginning(data);
	  							break;
	  					    }
	 	 				case 2:
	 	 					{
	  							printf("\nEnter data to insert at end of the list: \n");
   								scanf("%d", &data);
								insert_at_end(data);	
								break;
							}
						case 3:
							{
								printf("\nEnter data to insert at any position of the list: \n");
    							scanf("%d", &data);
								insert_at_any_position(data,v);
								break;
							}
						default:
							{
								printf("Invalid Choice\n");
								break;
							}
					}
				 break;	
		    	}
				case 2:
				{
					int y;
					printf("Select any one:\n1.Delete at beginning \n2.Delete at end \n3.Delete at any position \n ");
					scanf("%d",&y);
					switch(y)
					{
						case 1:
							{
	  							delete_at_beginning();
	  							break;
	  				   		}
	  					case 2:
		  					{
								delete_at_end();	
								break;
							}
						case 3:
							{
								delete_at_any_position();
								break;
							}
						default:
							{
								printf("Invalid Choice\n");
								break;
							}
					}
					
					break;
				}
			case 3: 
				{
					printf("The linked list is : \n");
					display();
					break;
				}
			case 4:
				{
					printf("The reversed list is :\n");
					reverse_list();
					break;
				}
			default:
				{
					printf("Invalid Input\n");
	    		}
			}
		}
	}
	while(select!=0);
	return 0;
}
void create_list()
{
	head=0;
	int choice=1;
	printf("Enter into create_list Function\n");
	while(choice)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data: \n");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		fflush(stdin);
		printf("Do you want to continue(0/1)? \n");
		scanf("%d",&choice);
	}
}
void insert_at_beginning(int data)
{
	newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
	newnode->next=head;
	head=newnode;
} 
void insert_at_end(int data)
{
	newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
	newnode->next=0;
	temp=head;
	while(temp->next!=0)
	{
		temp=temp->next;
	}
	temp->next=newnode;
} 
void insert_at_any_position(int data,int v)
{
	int pos,i;
	printf("Enter the position at which you want to insert :\n");
	scanf("%d",&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	 if(pos>v)
    {
    	printf("Invalid Position");
	}
	else
	{
		temp=head;
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}
		newnode->data=data;
		newnode->next=temp->next;
		temp->next=newnode;
	}
} 
void delete_at_beginning()
{
	temp=head;
	if(temp->next == 0)
	{
		head=0;
	}
	else
	{
	head=temp->next;
    }
	free(temp);
}
void delete_at_end()
{
	struct node*prevnode;
	temp=head;
	while(temp->next!=0)
	{
		prevnode=temp;
		temp=temp->next;
	}
	if(temp==0)
	{
		head=0;
	}
	else
	{
		prevnode->next=0;
	}
	free(temp);
}
void delete_at_any_position()
{
	struct node*nextnode;
	int pos,i=1;
	temp=head;
	printf("Enter the position at which you want to delete :\n");
	scanf("%d",&pos);
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	free(newnode);
}		
void display()
{
	temp=head;
	while(temp!=0)
	{
		printf("%d=> ",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
int get_length()
{
	int count=0;
	temp=head;
	while(temp!=0)
	{
		temp=temp->next;
		count++;
	}
	printf("The length is %d \n",count);
}
void reverse_list()
{
	struct node *prevnode,*currentnode,*nextnode;
	prevnode=0;
	currentnode=nextnode=head;
	while(nextnode!=0)
	{
		nextnode=nextnode->next;
		currentnode->next=prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
	}
	head=prevnode;
}