#include<stdio.h>

int Insert(int A[100], int n)
{
 int item, pos;
 printf("Enter element to be inserted & position of element:\n");
 scanf("%d %d", &item, &pos);

 if (pos>=100)
  printf("No more elements can be inserted.");
 else
  A[pos-1]=item;
 if(pos>n)
  n=pos;
 return n;
}

int Delete(int A[100], int n)
{
 int item;
 printf("Enter element to be deleted:\n");
 scanf("%d", &item);

 for (int i=0; i<n; i++)
  if (A[i]==item)
  {
   for (int pos=i; pos<n-1; pos++)
    A[pos]=A[pos+1];
   n--;
  }
 return n;
}

int Display(int A[100], int n)
{
 for(int i=0; i<n; i++)
  printf("%d\t", A[i]);
 return 0;
}
 
 
int main()
{
 int A[100], n, option;
 char quit;

 printf("Enter number of elements in array:\n");
  scanf("%d", &n);			
 printf("Enter elements of array:\n");
  for(int i=0; i<n; i++)
   scanf("%d", &A[i]);
 
 do
 { 
  printf("Menu\n");
  printf("1. Insert.\n");
  printf("2. Delete.\n");
  printf("3. Display.\n");
  printf("Choose an option:\n");  
  scanf("%d", &option);				 
    
  switch(option)
  {
   case 1 : n=Insert(A, n);
            Display(A, n);
				    break;
			
	 case 2 : n=Delete(A, n);
            Display(A, n);
				    break;
			
	 case 3 : Display(A, n);
				    break;
			
	 default : printf("Wrong choice entered.");	
  }
		
  printf("\nDo you want to repeat the menu? (y/n)\n");
	scanf("%c", &quit);	
  scanf("%c", &quit);
    						
 }while(quit == 'y' || quit == 'Y');
 return 0;
} 
