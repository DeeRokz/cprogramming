#include<stdio.h>

void input(int a[][10], int *rows, int *columns)
{
 printf("Enter the no of rows : ");
 scanf("%d", rows);
 printf("Enter the no of columns : ");
 scanf("%d", columns);
 
 printf("Enter %d elements : ", (*rows)*(*columns));
 for(int i=0; i<*rows; i++)
  for(int j=0; j<*columns; j++)
   scanf("%d", &a[i][j]);
}

void output(int a[][10], int rows, int column)
{
 printf("Diagonal Elements \n");
 for(int i=0; i<rows; i++)
  for(int j=0; j<column; j++)
   if(i==j)
    printf("%d, ", a[i][j]);
}

void main()
{
 int a[10][10], rows, columns;
 input(a, &rows, &columns); 
}
