#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 

int main()
{
  char str[MAX_SIZE];
  char toRemove;

  printf("Enter any string: ");
  fgets(str, 100, stdin);

  printf("Enter character to remove from string: ");
  toRemove = getchar();

  char RemoveChar(char *, char);
  RemoveChar(str, toRemove);

  printf("String after removing '%c': %s", toRemove, str);

  return 0;
}

char RemoveChar(char *str, char toRemove)
{
  int i, j;
  int len = strlen(str);

  for(i=0; i<len; i++)
  {
   if(str[i] == toRemove)
   {
    for(j=i; j<len; j++)
    {
     str[j] = str[j+1];
    }
    len--;
    i--;
  }
 }
 return 0;
}