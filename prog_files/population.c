#include <stdio.h>
struct census
{
          char city[50];
          long int population;
          float li;
};

int main()
{
          struct census temp,c[5];
          int i,p,j,count=1,option=0;
          for(i=0;i<5;i++)
          {
                    printf("********* Enter %d Details *********",count++);

                    printf("\nenter city name"); 
                    scanf("%s",c[i].city);
                    printf("Enter Population\n");
                    scanf(" %ld",&c[i].population);

                    printf("Literacy Level");
                    scanf("%f",&c[i].li);    
          }



          printf("Select one option \n");
          printf("1.Sort by Literacy\n");
          printf("2.Sort by Population\n");
          printf("3.Sort by Alphabetically\n");

          scanf("%d\t",&option);



// Sorting by Literacy Rate

     if(option == 1)

     {

          

          for(p=0;p<4;p++)
          {
                    for(j=0;j<5-p-1;j++)
                    {
                              if(c[j].li >c[j+1].li)
                              {
                                        temp=c[j];
                                        c[j]=c[j+1];
                                        c[j+1]=temp;
                              }
                    }

          }

          printf("\n********* Sorted In Order Literacy Rate *********\n");
          for(i=0;i<5;i++)
          {
                    printf("%s\t%ld\t%f\n",c[i].city,c[i].population,c[i].li);     
          }

     }



          //Sorting by Population 

     else if(option==2)

     {
          for(p=0;p<4;p++)
          {
                    for(j=0;j<5-p-1;j++)
                    {
                              if(c[j].population >c[j+1].population)
                              {
                                        temp=c[j];
                                        c[j]=c[j+1];
                                        c[j+1]=temp;
                              }
                    }

          }

          printf("\n********* Sorted In Population Order  *********\n");
          for(i=0;i<5;i++)
          {
                    printf("%s\t%ld\t%f\n",c[i].city,c[i].population,c[i].li);     
          }

     }


     //Sorting in order of City

     else if(option==3)

     {
          for(p=0;p<4;p++)
          {
                    for(j=0;j<5-p-1;j++)
                    {
                              if(c[j].city >c[j+1].city)
                              {
                                        temp=c[j];
                                        c[j]=c[j+1];
                                        c[j+1]=temp;
                              }
                    }

          }






          printf("\n********* Sorted In Alphabetically  Order  *********\n");
          for(i=0;i<5;i++)
          {
                    printf("%s\t%ld\t%f\n",c[i].city,c[i].population,c[i].li);     
          }

     }


else
{
     printf("Please choose an Appropiate option\n");
}


}
