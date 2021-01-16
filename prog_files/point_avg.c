#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define N 100
int main() {
  int i;
  float sum =0 , avg=0;
  char str;
  FILE * fptr;
  printf("Creating Random Variable between -0.5 to 0.5...\n");
  fptr = fopen("rand.dat", "w");
  if (fptr == NULL) {
    printf("Error in creating output.dat\n");
    return 0;
  }
  srand(time(NULL));
  fprintf(fptr, "%d\n", N);
  for (i = 1; i <= N; i++) {
    
    sum =((rand() % 2001 - 1000) / 2.e3);
    fprintf(fptr, "%0.4lf\n", sum);
    
  }
  
  sum += sum;
  avg = sum / 100;
  
  fprintf("The avg is %f",avg);
  
  fclose(fptr);
  fptr = fopen ("rand.dat", "r");  
  str = fgetc(fptr);
	while (str != EOF)
		{
			printf ("%c", str);
			str = fgetc(fptr);
		}
  fclose(fptr);
  return 0;
}