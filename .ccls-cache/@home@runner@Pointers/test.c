#include <stdio.h>
int main(){
  FILE *ptr;
  char ch='a', ch1;
  ptr = fopen("sample.txt", "w");
  if (ptr == NULL){
    printf("Error\n");
  }
else{
  fputc(ch, ptr);
  fclose(ptr);
  fopen("sample.txt","r");
  ch1=fgetc(ptr);
  putchar(ch1);
}
fclose(ptr);
printf("\n");
}