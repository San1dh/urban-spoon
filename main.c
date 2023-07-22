// pointers' address example

#include<stdio.h>
int main(){
  int a=5;
  int *p, *q;
  p = &a;
  q = p;
  printf("Address is %d value is %d", q, *q);
  printf("\n");
}
