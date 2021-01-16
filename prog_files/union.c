#include<stdio.h>
#include<stdlib.h>

int *setA,*setB;
int ctr,octr,ictr,sizeA,sizeB;


void set_union()
{
    int *unions=(int *)malloc((sizeA+sizeB)*sizeof(int));
    ctr=0;
    for(octr=0;octr<sizeA;octr++)
    unions[ctr++]=setA[octr];
    for(octr=0;octr<sizeB;octr++)
    {
        int flag=0;
        for(ictr=0;ictr<sizeA;ictr++)
        {
            if(setA[ictr]==setB[octr])
            flag=1;
        }
        if(flag==0)
        unions[ctr++]=setB[octr];
    }
    printf("\nA Union B is \n");
    for(octr=0;octr<ctr;octr++)
    printf("%d\t",unions[octr]);
    free(unions);
    
}

void set_intersection()
{
    int size;
    if(sizeA>=sizeB)
    size=sizeB;
    else
    size=sizeA;
    ctr=0;
    int *intersection=(int *)malloc(size*sizeof(int));
    for(octr=0;octr<sizeA;octr++)
    {
        for(ictr=0;ictr<sizeB;ictr++)
        {
            if(setA[octr]==setB[ictr])
            intersection[ctr++]=setB[ictr];
        }
    }
    printf("\nA Intersection B is \n");
    if(ctr==0)
    {
    printf("NULL");
    return;
    }
    for(octr=0;octr<ctr;octr++)
    printf("%d\t",intersection[octr]);
    free(intersection);
    
}


void set_difference()
{
    AdifferenceB();
    BdifferenceA();
}

void AdifferenceB() 
{   
    int *AdiffB=(int *)malloc(sizeA*sizeof(int));
    ctr=0;
    for(octr=0;octr<sizeA;octr++)
    {
        int flag=0;
        for(ictr=0;ictr<sizeB;ictr++)
        {
            if(setB[ictr]==setA[octr])
            flag=1;
        }
        if(flag==0)
        AdiffB[ctr++]=setA[octr];
    }
    printf("\nA - B is \n");
    if(ctr==0)
    {    printf("NULL");
    return;
    }
    for(octr=0;octr<ctr;octr++)
    printf("%d\t",AdiffB[octr]);
    free(AdiffB);
    
}
void BdifferenceA() 
{
    int *BdiffA=(int *)malloc(sizeB*sizeof(int));
    ctr=0;
    for(octr=0;octr<sizeB;octr++)
    {
        int flag=0;
        for(ictr=0;ictr<sizeA;ictr++)
        {
            if(setA[ictr]==setB[octr])
            flag=1;
        }
        if(flag==0)
        BdiffA[ctr++]=setB[octr];
    }
    printf("\nB - A is \n");
    if(ctr==0)
    {    printf("NULL");
    return;
    }
    for(octr=0;octr<ctr;octr++)
    printf("%d\t",BdiffA[octr]);
    free(BdiffA);
    
}

int main()
{
printf("Enter the size for set A\n");
scanf("%d",&sizeA);

printf("Enter the size for set B\n");
scanf("%d",&sizeB);

setA=(int *)malloc(sizeA*sizeof(int));
setB=(int *)malloc(sizeB*sizeof(int));

printf("Enter the elements of set A\n");
for(ctr=0;ctr<sizeA;ctr++)
scanf("%d",&setA[ctr]);

printf("Enter the elements of set B\n");
for(ctr=0;ctr<sizeB;ctr++)
scanf("%d",&setB[ctr]);

set_union();
set_intersection();
set_difference();
free(setA);
free(setB);