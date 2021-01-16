#include <stdio.h>
void SwapValue(int &a, int &b) {
   int t = a;
   a = b;
   b = t;
}
int main() {
   int a, b;
   printf("Enter value of a : ");
   scanf("%d", &a);
   printf("\nEnter value of b : ");
   scanf("%d", &b);
   SwapValue(a, b);
   printf("\nAfter swapping, the values are: a = %d, b = %d", a, b);
   return 0;
}