#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node
{
	int data;
	struct node *left,*right;
};

struct node *create(int x)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->left=0;
	newnode->right=0;
	return newnode;
}

bool search(struct node *root, int x)
{
    if(root==NULL)
		return false;
	else if(root->data==x) 
        return true;
    else if(x>root->data) 
        return search(root->right,x);
    else 
        return search(root->left,x);
}

struct node *find_minimum(struct node*root)
{
    while(root->left != NULL)
    {
        root=root->left;
    }
    return root;
}

struct node* insert(struct node *root, int x)
{
	if(root==NULL)
        return create(x);
    else if(x>root->data) 
        root->right = insert(root->right,x);
    else
        root->left = insert(root->left,x);
    return root;
}

struct node* deletion(struct node *root, int x)
{
    if(root==NULL)
        return NULL;
    else if (x>root->data)
        root->right = deletion(root->right, x);
    else if(x<root->data)
        root->left = deletion(root->left, x);
    else
    {
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
        }
        else if(root->left==NULL || root->right==NULL)
        {
            struct node *temp = root;
            if(root->left==NULL)
            {
				temp = root->right;
			}
            else
            {
				temp = root->left;
			}
            free(temp);
            return temp;
        }
        else
        {
            struct node *temp = find_minimum(root->right);
            root->data = temp->data;
            root->right = deletion(root->right, temp->data);
        }
    }
    return root;
}

void inorder(struct node *root)
{
	if(root==0)
	{
		return;
	}
	inorder(root->left);
	printf("%d\t",root->data);
	inorder(root->right);
}

int main()
{
	struct node *root=0;
	int i,n,x,s,d;
	printf("\t\t\tBINARY TREE SEARCH TRAVERSAL PROGRAMME\t\t\t\n");
	printf("\t\t\t--------------------------------------\t\t\t\n");
	printf("Enter the number of nodes in BST \n");
	scanf("%d", &n);
	printf("\nInput the nodes of the binary search tree : \n");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &x);
		root = insert(root, x);
	}
	printf("Inorder Traversal is : \n");
	inorder(root);
	printf("\n");
	printf("\nEnter the node to be searched: \n");
	scanf("%d",&s);
	if(search(root,s)==true)
	{
		printf("%d is Found\n",s);
	}
	else
	{
		printf("Not Found\n");
	}
	printf("\nEnter the node to be deleted: \n");
	scanf("%d",&d);
	root = deletion(root , d);
	printf("\nInorder Traversal of modified tree is : \n");
	inorder(root);
	printf("\n");
	return 0;
}