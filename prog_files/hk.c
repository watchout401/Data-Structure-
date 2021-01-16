#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *strlwr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = tolower((unsigned char)*p);
      p++;
  }

  return str;
}

int main()
{
    char str[100];
    printf ("Enter the String- ");
    fgets(str,100,stdin);

    printf ("Your String after conversion : - %s" , strlwr(str));
    printf("\n");
}