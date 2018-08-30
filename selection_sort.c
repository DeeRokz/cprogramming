#include<stdio.h>

void input(int a[], int *n)
{
 printf("Enter the no. of elements : ");
 scanf("%d", n);
 
 printf("Enter %d elements : ", *n);
 for(int i=0; i<*n; i++)
  scanf("%d", &a[i]);
}

void selection_sort(int a[], int n, int *low, int *high)
{
 int min, l, m, i, j, temp;
 for(i=0; i<n; i++)
 {
  min=a[i];
  l=i;
  for(j=i+1; j<n; j++)
  {
   if(min>a[j])
   {
    min=a[j];
    l=j;
   }
  }
  temp=a[i];
  a[i]=a[l];
  a[l]=temp;
 } 
 
 *low=a[0];
 *high=a[n-1];

}

void output(int a[], int n,int low, int high)
{
 printf("Sorted Array : ");
 for(int i=0; i<n; i++)
  printf("%d ,", a[i]);
 printf("\nLowest Value : %d, Highest Value : %d", low, high);
}

void main()
{
 int a[30], n, low, high;
 input(a, &n);
 selection_sort(a, n, &low, &high);
 output(a,n,low, high);
}
