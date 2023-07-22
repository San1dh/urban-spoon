/*
 Program : 17
 Purpose:  Write a menu driven program for performing matrix addition, multiplication and finding the matrix transpose.
Use functions to i) read a matrix ii)Find the sum of two matrices iii) find the product of two matrices iv)find the transpose of a matrix v) display a matrix
Author: Rohaan Renu John
 Date: 12-09-2021
*/
#include <stdio.h>

void displayArray(int row, int col, int arr[500][500])
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
            printf("%d ", arr[i][j]);
        printf("\n");    
    }    
}

void readArray(int row, int col, int arr[500][500])
{
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            scanf("%d", &arr[i][j]);
    
	//displayArray(row, col, arr);          // for debugging
	//printf("\n");
}

void sumArray(int r1, int c1, int r2, int c2, int arr1[500][500], int arr2[500][500])
{    
	if((r1 == r2) && (c1 == c2))
	{
		int row = r1, col = c1;
		int sum[500][500];
		
		for(int i=0; i<row; i++)
        	for(int j=0; j<col; j++)
            	sum[i][j] = arr1[i][j] + arr2[i][j];
		
		displayArray(row, col, sum); 
	}
    else
		printf("Matrices cannot be added");        
}

void productArray(int r1, int c1, int r2, int c2, int arr1[500][500], int arr2[500][500])
{
  	if(c1 == r2)
	{
		int product[500][500];
		int row = r1, col = c2;
		int n = c1; 				// as long as c1 = r2
    
    	for(int i=0; i<r1; i++)
        	for(int j=0; j<c2; j++)
        	{
           		product[i][j] = 0;
            
            	for(int k=0; k<n; k++)
                	product[i][j] += arr1[i][k] * arr2[k][j];
        	}
        
    	displayArray(row, col, product);
	}
	else
		printf("Matrices cannot be multiplied");
}

void transposeArray(int row, int col, int arr[500][500])
{
    int transpose[500][500];
    
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            transpose[j][i] = arr[i][j];
            
    displayArray(col, row, transpose);        
}

void main()
{
    //int ch;
    int arr1[500][500], arr2[500][500];
    int r1, c1, r2, c2;
    char quit;
	  printf("Choose an option:\n");
    printf("1. Add two matrices\n");
    printf("2. Multiply two matrices\n");
    printf("3. Transpose of a matrix\n");
  
	do
	{
		int ch;  
    scanf("%d", &ch);				 
    
    	switch(ch)
    	{
       case 1 : printf("\nEnter rows & columns of 1st array:\n");
                scanf("%d %d", &r1, &c1);			// input rows and columns of first array
                printf("Enter 1st array:\n");
        	      readArray(r1, c1, arr1);

                printf("Enter rows & columns of 2nd array:\n");
        	      scanf("%d %d", &r2, &c2);     // input rows and columns of second array
                printf("Enter 2nd array:\n");
        	      readArray(r2, c2, arr2);		

                printf("Sum of arrays:\n");
        	      sumArray(r1, c1, r2, c2, arr1, arr2);
				        break;
			
			 case 2 : printf("\nEnter rows & columns of 1st array:\n");
                scanf("%d %d", &r1, &c1);			// input rows and columns of first array
                printf("Enter 1st array:\n");
        	      readArray(r1, c1, arr1);

                printf("Enter rows & columns of 2nd array:\n");
        	      scanf("%d %d", &r2, &c2);     // input rows and columns of second array
                printf("Enter 2nd array:\n");
        	      readArray(r2, c2, arr2);		
                
                printf("Product of arrays:\n");
				        productArray(r1, c1, r2, c2, arr1, arr2);
				        break;
			
			 case 3 : printf("\nEnter rows & columns of array:\n");
                scanf("%d %d", &r1, &c1);			// input rows and  columns of array
                printf("Enter array:\n");
        	      readArray(r1, c1, arr1);
			
                printf("Transpose of array:\n");
				        transposeArray(r1, c1, arr1);
				        break;
			
			 default : printf("Wrong choice entered\n");	
    	}
		
		printf("\nDo you want to repeat the menu? (y/n)\n");
		scanf("%c", &quit);								// Y/y to continue, N/n to quit
    scanf("%c", &quit);	
  
  }while(quit == 'Y' || quit == 'y');
		
}
