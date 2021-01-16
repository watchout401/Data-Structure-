//6. Write a function to find the factorial using recursion.
#include<stdio.h>
long int Factori(int);
int main()
{
  long int fact;
  int numbr;
  printf("   Enter a number: ");
  scanf("%d",&numbr);
  fact= Factori(numbr);
  printf("   Factorial of %d is: %ld\n",numbr,fact);
  return 0;
}

long int Factori(int n)
{
  int i;
  long int factorial=1;
  if(n == 1)
  factorial =1;
  else
  factorial=n*Factori(n-1);
  return(factorial);
}

 