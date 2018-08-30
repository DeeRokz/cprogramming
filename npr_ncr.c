#include<stdio.h>

long int fact(int n)
{
 int f=1;
 for(int i=2; i<=n; i++)
  f=f*i;
 return f;
}

void compute(long int *ncr, long int *npr, int n, int r)
{
 *npr=fact(n)/fact(n-r);
 *ncr=*npr/fact(r);
}

void input(int *n, int *r)
{
 printf("Enter the value of n : ");
 scanf("%d", n);
 
 printf("Enter the value of r : ");
 scanf("%d", r);
}

void output(int ncr, int npr)
{
 printf("nPr : %d\nnCr : %d", npr, ncr);
}

void main()
{
 int n, r;
 long int ncr, npr;
 input(&n, &r);
 compute(&ncr, &npr, n, r);
 output(ncr, npr);
}
