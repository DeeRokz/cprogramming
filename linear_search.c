#include<stdio.h>

void input(int e[], int *n)
{
 printf("Enter the no of elements : ");
 scanf("%d", n);

 printf("Enter %d Elements : ", *n);
 for(int i=0; i<*n; i++)
  scanf("%d", &e[i]);
}

void linear_search(int e[], int n, int *se, int *pos, int *f)
{
 printf("Enter the element to search : ");
 scanf("%d", se);

 for(int i=0; i<n; i++)
  if(e[i]==*se)
   {
    *pos=i + 1; 
    *f=1;
    break;
   }
}

void output(int f, int pos)
{
 if(f==1)
  printf("The element is found in the position %d.", pos);
 else
  printf("No Element found.");
}

void main()
{
 int n,e[50], se, pos, f=0;
 input(e, &n);
 linear_search(e, n, &se, &pos, &f);
 output(f, pos);
}
