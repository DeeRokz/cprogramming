#include<stdio.h>

void greatest_number(int num1, int num2, int num3)
{
 if(num1>num2&&num1>num3)
  printf("The Greatest Number Among Three Is : %d \n", num1);
 else if(num2>num1&&num2>num3)
  printf("The Greatest Number Among Three Is : %d \n", num2);
 else
  printf("The Greatest Number Among Three Is : %d \n", num3);
}

void input(int num1,int num2,int num3)
{
 printf("Enter three numbers : ");
 scanf("%d %d %d", &num1, &num2, &num3);
 greatest_number(num1, num2, num3);
}

void main()
{
 int num1, num2, num3;
 input(num1, num2, num3);
}
