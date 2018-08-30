#include<stdio.h>

void input(int *n)
{
 printf("Enter the number : ");
 scanf("%d", n);
}

void print_prime(int n, int *f)
{
 
 for(int i=2; i<=n; i++)
 {
   *f=0;
   for(int j=2; j<=i/2; j++)
   {
    if(i%j==0)
    {
     *f=1;
     break;
    }
   }
  if(*f==0 && n!=1)
   printf("%d ,",i);
 }
}

void main()
{
 int n, f;
 input(&n);
 print_prime(n, &f);
}

