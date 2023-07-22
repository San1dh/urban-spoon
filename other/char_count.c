#include<stdio.h>
void main(){
FILE *np;
char ch;
int lines=1, tabs=0, blanks=0, characters=0;
np = fopen("poem.txt", "r");
while(ch!=EOF)
 {
  ch=fgetc(np);
  characters++;
  if (ch == ' '){
    blanks++;
  }
  if (ch == '\n'){
    lines++;
  }
  if (ch == '\t'){
    tabs++;
  }
 }
  fclose(np);
  printf("Characters=%d\n", characters);
  printf("Spaces=%d\n", blanks);
  printf("Tabs=%d\n", tabs);
  printf("Lines=%d\n", lines);
  printf("\n");
}

