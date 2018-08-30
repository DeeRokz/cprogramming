#include<stdio.h>

void input(int *a, int *b)
{
 printf("\nEnter the number a & b respectively");
 scanf("%d%d", a, b);
}

void compute(int *a, int *b)
{
 int t;
 t = *a;
 *a = *b;
 *b = t;
}

void output(int *a, int *b)
{
 printf("After Swapping : \na - %d, b - %d", *a, *b);
}

void main()
{
 int a, b;
 
 input(&a, &b);
 compute(&a, &b);
 output(&a, &b);
}
