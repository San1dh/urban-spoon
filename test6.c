/*
Exam-S2 CS1

4. Write a function that receives a character string and a character as argument and deletes all occurrences of this character in the string. The function should return the corrected string with no holes. Also write the main function to invoke the above function.(ROLL NOs:46-63)
*/

#include <stdio.h>
#include <string.h>

int main()
{
 char str[100];
 char c;
 printf("Enter any string:\n");
 fgets(str, 100, stdin);
 printf("\nEnter character to remove from string:\n");
 c = getchar();
 char RemoveChar(char *string, char character);
 RemoveChar(str, c);
 printf("\nString after removing '%c':\n%s", c, str);
 return 0;
}

char RemoveChar(char *str, char c)
{
 int i, j, l;
 l = strlen(str);
 for(i=0; i<l; i++)
 {
  if(c == str[i])
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