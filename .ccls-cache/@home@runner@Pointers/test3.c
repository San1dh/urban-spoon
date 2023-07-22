/*
Program: Exam-S2 CS1
Purpose: Write a function that receives a character string and a character as argument and deletes all occurrences of this character in the string. The function should return the corrected string with no holes. Also write the main function to invoke the above function.
Author: Rohaan Renu John 
Roll No.: 54
Date: 27-09-2021
*/
#include <stdio.h>
#include <string.h>

int main()
{
  char str[100];
  char chartoremove;
  printf("Enter any string: ");
  fgets(str, 100, stdin);
  printf("Enter character to remove from string: ");
  chartoremove = getchar();
  char removechar(char *, char);
  removechar(str, chartoremove);
  printf("String after removing '%c': %s", chartoremove, str);
  return 0;
}

char removechar(char *str, char chartoremove)
{
  int i, j;
  int len = strlen(str);
  for(i=0; i<len; i++)
  {
   if(str[i] == chartoremove)
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