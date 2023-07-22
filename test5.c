#include <stdio.h>
#include <string.h>

int main()
{
 char str[100];
 char c;
 printf("Enter any string: ");
 fgets(str, 100, stdin);
 printf("\nEnter character to remove from string: ");
 c = getchar();
 char RemoveChar(char *string, char character);
 RemoveChar(str, c);
 printf("\nString after removing '%c': %s", c, str);
 return 0;
}

char RemoveChar(char *str, char c)
{
 int i, j, l;
 l = strlen(str);
 for(i=0; i<l; i++)
 {
  if(str[i] == c)
  {
   for(j=i; j<l; j++)
   {
    str[j] = str[j+1];
   }
   l--;
   i--;
  }
 }
 return 0;
}