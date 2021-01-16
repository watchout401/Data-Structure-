#include<stdio.h>
#include<stdlib.h>

struct node {
    int data ; 
    struct node *leftChild;
    struct node *rightChild;
};struct node *root=NULL;

void insert(int data) {
   struct node *tempNode = (struct node*) malloc(sizeof(struct node));
   struct node *current;
   struct node *parent;

   tempNode->data = data;
   tempNode->leftChild = NULL;
   tempNode->rightChild = NULL;

   //if tree is empty, create root node
   if(root == NULL) 
   {
      root = tempNode;
   } 
   else 
   {
      current = root;
      parent  = NULL;

      while(1) 
      {                
         parent = current;

         //go to left of the tree
         if(data < parent->data) 
         {
            current = current->leftChild;                
            
            //insert to the left
            if(current == NULL) 
            {
               parent->leftChild = tempNode;
               return;
            }
         }
			
         //go to right of the tree
         else 
         {
            current = current->rightChild;
            
            //insert to the right
            if(current == NULL) 
            {
               parent->rightChild = tempNode;
               return;
            }
         }
      }            
   }

}

struct node* search(int data) {
   struct node *current = root;
   printf("\nVisiting elements: ");

   while(current->data != data) {
      if(current != NULL)
      printf("%d ",current->data); 
      
      //go to left tree

      if(current->data > data) {
         current = current->leftChild;
      }
      //else go to right tree
      else {                
         current = current->rightChild;
      }

      //not found
      if(current == NULL) {
         return NULL;
      }

      
   } 
   return  current; 
}

void display (struct node *head)
{
   if(head == NULL)
   {
      return;
   }

   printf("%d \t", head->data);
   display(head->leftChild);
   display(head->rightChild);
}

int main()
{
   int data,num=0,sr=0,i;

   struct node *ele;

   printf("How many data you want to enter");
   scanf("%d",&num);

   while(i<num)
   {
      printf("Enter the %d data",i+1);
      scanf("%d",&data);
      insert(data);
      i++;
   }

   printf("\nWhich element you want to search");
   scanf("%d",&sr);
   ele = search(sr);

   printf("\n Element found %d",ele->data);

   printf("\nElements entered\n");

   display(root);

}