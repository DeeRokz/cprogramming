#include<stdio.h>

void input(int *rows, int *column, int a[][10], int *f)
{
 f=0;
 printf("Enter the number of Rows : ");
 scanf("%d", rows);
 printf("Enter the number of Columns : ");
 scanf("%d", column);

 printf("Enter the %d elements : ", *rows * *column);
 for(int i=0; i<*rows; i++)
  for(int j=0; j<*column; j++)
   scanf("%d", &a[i][j]);
}

void check_symmetry(int rows, int column, int a[][10], int transpose[][10], int *f)
{

 *f=0;
 
 for(int i=0; i<rows; i++)
  for(int j=0; j<column; j++)
   transpose[i][j] = a[i][j];

 if(rows!=column)
  {*f=1;}
 else
  {
   for(int i=0; i<rows; i++)
    for(int j=0; j<column; j++)
     if(a[i][j]!=transpose[i][j])
      {
       *f=1;
       break;
      }
  }
}

void output(int f)
{
 if(f!=1)
  printf("Given matrix is symmetric");
 else
  printf("Given matrix is NOT symmetric");
}

void main()
{
 int a[10][10], transpose[10][10], rows, column, f;
 
 input(&rows, &column, a, &f);
 check_symmetry(rows, column, a, transpose, &f);
 output(f);
}
