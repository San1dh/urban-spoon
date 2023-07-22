// Exam-S2 CS1

// 4. Write a function that receives a character string and a character as argument and deletes all occurrences of this character in the string. The function should return the corrected string with no holes. Also write the main function to invoke the above function.(ROLL NOs:46-63)

#include<stdio.h>
void main()
{
  char str[100], c;
  printf("Enter a string-\n");
  fgets(str, 100, stdin);
  printf("Enter a character to remove-\n");
  scanf("%c", &c);
  printf("%s", str);
  printf("%c", c);
  }