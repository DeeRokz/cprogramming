#include<stdio.h>
#include<math.h>

void input(int *n)
{
 printf("Enter the number : ");
 scanf("%d", n);
}

void check_armstrong(int n, int *armstrong)
{
 int original, r=0, digit=0;

 original = n;

 while(original!=0)
 {
  original/=10;
  ++digit;
 }

 original = n;
 
 while(original!=0)
 {
  r = original%10;
  *armstrong += pow(r,digit);
  original/=10; 
 }
 
}

void output(int n, int armstrong)
{
 if(n==armstrong)
  printf("It is Armstrong");
 else
  printf("It is NOT Armstrong");
}

void main()
{

 int n, armstrong=0;
 
 input(&n);
 check_armstrong(n, &armstrong);
 output(n,armstrong);

}
