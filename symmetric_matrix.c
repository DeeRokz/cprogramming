#include<stdio.h>

void input_dimentions(int *rows, int *column)
{
 printf("Enter the number of Rows : ");
 scanf("%d", rows);
 printf("Enter the number of Columns : ");
 scanf("%d", column);

}

void input(int rows, int column, int a[rows][column])
{
 
 printf("Enter the %d elements : ", rows * column);
  for(int i=0; i<rows; i++)
   for(int j=0; j<column; j++)
    scanf("%d", &a[i][j]);
}

void check_symmetry(int rows, int column, int a[rows][column], int transpose[rows][column], int *f)
{

 *f=0;
 
 for(int i=0; i<rows; i++)
  for(int j=0; j<column; j++)
   transpose[i][j] = a[i][j];

 if(rows!=column)
   *f=1;
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
 int rows, column, f;
 input_dimentions(&rows, &column);
 int a[rows][column], transpose[rows][column];
 input(rows, column, a);
 check_symmetry(rows, column, a, transpose, &f);
 output(f);
}
