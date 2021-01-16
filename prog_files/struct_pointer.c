#include<stdio.h>
#include<stdlib.h>
struct point
{
	int x ; 
	int y ;
};

struct point* add(int a, int b )
{
	struct point *ptr = (struct point *)malloc(sizeof(struct point));

	ptr->x = a;
	ptr->y= a+b;

	return ptr;
}

int main()
{
	struct point *ptr = NULL , *ptr1 = NULL;

	ptr = add (3,4);
	ptr1 = add(5,2);

	printf("Result -->%d %d",ptr->x,ptr->y);
	printf("\nResult2 --> %d %d",ptr1->x,ptr1->y);


}