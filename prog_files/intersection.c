#include<stdio.h>

void set_Union(int set1[], int set2[], int ele1, int ele2) {

    int f, i, j, k = 0;
    int set3[100];

    for (i = 0; i < ele1; i++) {
        set3[k] = set1[i];
        k++;
    }

    for (i = 0; i < ele2; i++) {
        f = 0;
        for (j = 0; j < ele1; j++) {
            if (set2[i] == set1[j]) {
                f = 1;
            }
        }

        if (f == 0) {
            set3[k] = set2[i];
            k++;
        }
    }
    printf("Union of two array is:");
    for (i = 0; i < k; i++) {
        printf("%d ", set3[i]);
    }
}



void set_intersection(int set1[], int set2[], int ele1, int ele2)
{
	int i ,set3[200];

	for (i=0;i<ele1;i++)
	{

		for(int j=0;j<ele2;j++)
		{
			if(set1[i] == set2[j])
			{
				set3[i] = set1[i];
			}	
	}

	printf("Intersection of two array is:");
    for (i = 0; i <ele1; i++) {
        printf("%d ", set3[i]);
    }
}

}


void set_difference(int set1[], int set2[], int ele1,int ele2)
{
	// pehele A-B 

	int i =0 ,set3[200],temp=0 ,k; 

	for (i= 0 ; i<ele1 ; i++ )

		temp =0;

		for (int j = 0 ; j < ele2 ; i ++)
	{
		if(set1[j]==set2[i])
		{
			temp =1;
			break;
		}
	

	if(temp)continue;
	set3[k] = set2[i];
	k++;
}

	for(int j =0 ; j<ele1 ; j++){
		printf("A-B = %d \n",set3[j]);
	}

	// IDHAR B-A HO RA 

	for (i= 0 ; i<ele1 ; i++ )

		temp =0;

		for (int j = 0 ; j < ele2 ; i ++)
	{
		if(set1[i]==set2[j])
		{
			temp =1;
			break;
		}
	

	if(temp)continue;
	set3[k] = set1[i];
	k++;

}	

	for(int j =0 ; j<ele1 ; j++){
		printf("A-B = %d \n",set3[j]);
	}

}


int main(int argc, char const *argv[])

{	
	int ele1=0,ele2,i,set1[100],set2[100],set3[200],option=0;



	printf("enter the number of elemnts in first set :\t ");
	scanf("%d",&ele1);
	printf("Enter %d elemnts",ele1);
	for (i=0;i<ele1;i++)
	{
		scanf("%d",&set1[i]);
	}

	printf("enter the number of elemnts in first set :\t ");
	scanf("%d",&ele2);
	printf("Enter %d elemnts",ele2);
	for (i=0;i<ele2;i++)
	{
		scanf("%d",&set2[i]);
	}

	printf("1.A Union B \n");
	printf("2.A Intersection B \n");
	printf("3.A-B and B-A\n");
	printf("Select Option:- \t");
	scanf("%d",&option);

	if(option == 1)
	{
		 
		set_Union(set1,set2,ele1,ele2);
	}

	else if (option == 2)
	{
		set_intersection(set1,set2,ele1,ele2);
	}

	else if (option == 3)
	{
		set_difference(set1,set2,ele1,ele2);
	}

}
