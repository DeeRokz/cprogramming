#include<stdio.h>

void output(int e[],int n)
{
  printf("Sorted Array : \n");
  for(int i=0;i<n;i++)
   printf("%d ", e[i]);
}

void bubble_sort(int e[],int n)
{
  int temp;
   
  for(int i=n-2;i>=0;i--)
   for(int j=0;j<=i;j++)
    if(e[j]>e[j+1])
     {
       temp=e[j];
       e[j]=e[j+1];
       e[j+1]=temp;
     }

}

void input(int *n, int e[])
{

 printf("Enter the number of elements you are going to use : ");
 scanf("%d", n);
  
 printf("Enter the %d Elements : ", *n);
 for(int i=0;i<*n;i++)
  scanf("%d", &e[i]);

}

void main()
{
 int n, e[50];
 input(&n,e); 
 bubble_sort(e,n);
 output(e,n);
}



















