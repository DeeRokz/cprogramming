#include<stdio.h>

void input(int *n, int a[][10], int b[][10])
{
 
 printf("Enter the number of rows for the matrix : ");
 scanf("%d", n);
 
 printf("Enter %d Elements to the First Matrix : ", *n * *n);
 for(int i=0; i<*n; i++)
  for(int j=0; j<*n; j++)
   scanf("%d", &a[i][j]);
 
 printf("Enter %d Elements to the Second Matrix : ", *n * *n);
 for(int i=0; i<*n; i++)
  for(int j=0; j<*n; j++)
   scanf("%d", &b[i][j]);

}

void matrix_multiply(int n, int a[][10], int b[][10], int result[][10])
{

 int i, j, k;//, sum=0;
 
 for(i=0; i<n; i++)
 {
  for(j=0; j<n; j++)
  {
   result[i][j]=0;
   for(k=0; k<n; k++)
    {
     result[i][j]+=a[i][k]*b[k][j];
     //sum = sum + a[i][k] * b[k][j];
    }
   //result[i][j] = sum;
   //sum=0;
  }
 }

}

void output(int result[][10], int n)
{

 printf("Resultant Matrix\n");
 for(int i=0; i<n; i++)
  {
   for(int j=0; j<n; j++)
    printf("%d ", result[i][j]);
   printf("\n");
  }
}

void main()
{
 int n, a[10][10], b[10][10], result[10][10];
 
 input(&n,a,b);
 matrix_multiply(n,a,b,result);
 output(result,n);
}
