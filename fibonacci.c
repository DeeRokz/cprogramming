#include<stdio.h>

void input(int *n)
{
 printf("Enter the limit : ");
 scanf("%d", n);
}

void print_fibonacci(int *n1, int *n2, int *nt, int n)
{
 printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i)
    {
        printf("%d, ", *n1);
        *nt = *n1 + *n2;
        *n1 = *n2;
        *n2 = *nt;
    }
}

void main()
{
 int n1=0, n2=1, nt, i, n;
 
 input(&n);
 print_fibonacci(&n1, &n2, &nt, n);
}
