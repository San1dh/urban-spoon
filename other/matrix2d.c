#include<stdio.h>

int main()
{
 int i, j, mat[10][10], row, col;

 printf("\nEnter the number of Rows : ");
 scanf("%d", &row);
 
 printf("\nEnter the number of Columns : ");
 scanf("%d", &col);
 
 //Accept the Elements in Matrix
 printf("\n");
 for (i = 0; i < row; i++) 
 {
  for (j = 0; j < col; j++) 
  {
   /*printf("\nEnter the Element mat[%d][%d] : ", i, j);*/
   scanf("%d", &mat[i][j]);
  }
 }
    
 printf("\n%dx%d Matrix : \n\n",row,col);
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   printf("%d ",mat[i][j]);
  }
  printf("\n");
 }
    
 printf("\n%dx%d Matrix : \n\n",col,row);
 for(j=0;j<col;j++)
 {
  for(i=0;i<row;i++)
  {
   printf("%d ",mat[i][j]);
  }
  printf("\n");
 }

 return 0;
}
