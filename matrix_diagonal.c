#include<stdio.h>

void input_dimentions(int *rows, int *columns)
{
 printf("Enter the no of rows : ");
 scanf("%d", rows);
 printf("Enter the no of columns : ");
 scanf("%d", columns);
}

void input(int rows, int columns, int a[rows][columns])
{
 
 printf("Enter %d elements : ", rows*columns);
 for(int i=0; i<rows; i++)
  for(int j=0; j<columns; j++)
   scanf("%d", &a[i][j]);
}

void output(int rows, int columns, int a[rows][columns])
{
 printf("Diagonal Elements \n");
 for(int i=0; i<rows; i++)
  for(int j=0; j<columns; j++)
   if(i==j)
    printf("%d, ", a[i][j]);
}

void main()
{
 int rows, columns;
 input_dimentions(&rows, &columns);
 int a[rows][columns];
 input(rows, columns, a);
 output(rows, columns, a);
}
