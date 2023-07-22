#include <stdio.h>
int main(){
int s;

for (int i = 0; s[i]!='\0'; i++) {
   if(s[i] >= 'A' && s[i] <= 'Z') {
      s[i] = s[i] + 32;
   }
 }
}