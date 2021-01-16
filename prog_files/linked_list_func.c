#include<stdio.h>
#include<stdlib.h>



struct node{
	
	int data;
	struct node *next;


}; struct node *ptr,*current,*head,*temp,*v_ptr;


//This function is used to display the element of the node 
void display (){

	
	ptr= head;

	puts("Your Entered Data's are :-");

	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr = ptr->next;
	}
}

//This function is used to inset the data at the end of the node
void insert_end(){


	struct node *ptr;

	ptr = (struct node*)malloc(sizeof(struct node));

	puts("Enter the element for END");
	scanf("%d",&ptr->data);
	ptr->next = NULL;

	current->next = ptr;
	current = ptr;



//This function is used to enter the data in the first of the node
}

void insert_start(){

	
	
	ptr = (struct node*)malloc(sizeof(struct node));
	temp = head; // storing the address of 1st element of the node
	puts("Enter the element for FIRST");
	scanf("%d",&ptr->data);
	ptr->next = temp; // pointing to the previous address
	head = ptr ; // now head is pointing to the very first element of the node

}

//This function is used to enter the element in the middle of the node 
void insert_middle(int pos){

	v_ptr = head;
	int new_data_pos=0,count=0;

	ptr=(struct node*)malloc(sizeof(struct node));

	puts("\nWhere u want to enter the data");
	
	scanf("%d",&new_data_pos);

	puts("Enter the MIDDLE ELEMENT");
	scanf("%d",&ptr->data);
	ptr->next = NULL;
	while(v_ptr!=NULL)
	{	
		if(count == new_data_pos-2)
		{
			temp = v_ptr->next;
			v_ptr->next=ptr;
			ptr->next= temp;
			break;
		}

		v_ptr = v_ptr->next;

		count++;
	}


}
// This function is used for deletetion of the element from the start of the node
void delete_at_start(){

	head = head->next;	

}

void delete_at_any(){
	int count=0,v_count=0,delete_pos;

	ptr=v_ptr=head;

	puts("enter the postition of the number you want to delete from the list");
	scanf("%d",&delete_pos);
	while(ptr!=NULL)
	{
		count++;
		if(delete_pos-2 == count)
		{
			while(v_ptr!=NULL)
			{
				v_count++;
				if(delete_pos-1 == v_count)
				{
					ptr->next = v_ptr->next;
					break;
				}

				v_ptr=v_ptr->next;
			}
		}
		ptr=ptr->next;
	}

}

int i=0,entires=0; 
int choice=0;
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

	
	puts("Want to enter delete data ");
	scanf("%d",&choice);
	if(choice == 1){

		//insert_end();
		//insert_start();
		display();
		delete_at_any();
		display();
	}
	else 
		display();

}
