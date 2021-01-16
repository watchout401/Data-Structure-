#include<stdio.h>
#include<stdlib.h>

struct node

{
	int data;
	struct node *next;	
};struct node *ptr , *current , *head,*dis;


int main(){
int check=0; 



//printf("How many data want to enter \n");
//scanf("%d",&no_data);

do{
	ptr = (struct node *)malloc(sizeof(struct node));

	if(ptr==0){
		printf("NOt enough memory available");
	}


	printf("enter the data ");
	scanf("%d",&ptr->data);
	ptr->next=0;


	if(head == 0){
		printf("chl rha hai");
		head = ptr;
		current = ptr; 
	}

	else

		current->next=ptr;
		current = ptr;	
	
printf("Want to enter more data?(Y/N)");
scanf("%d",&check);

}while(check==1);



	dis=head;
	while(dis!=0)
	{
		printf("%d=> ",dis->data);
		dis=dis->next;
	}
	printf("NULL\n");
}