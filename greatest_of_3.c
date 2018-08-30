#include<stdio.h>

void greatest_number(int num1, int num2, int num3, int *big)
{
 if(num1>num2&&num1>num3)
  *big=num1;
 else if(num2>num1&&num2>num3)
  *big=num2;
 else
  *big=num3;
}

void input(int *num1,int *num2,int *num3)
{
 printf("Enter three numbers : ");
 scanf("%d %d %d", num1, num2, num3);
}

void output(int big)
{
 printf("The Greatest Number Among Three Is : %d \n", big);
}

void main()
{
 int num1, num2, num3, big;
 input(&num1, &num2, &num3);
 greatest_number(num1, num2, num3, &big);
 output(big);
}
