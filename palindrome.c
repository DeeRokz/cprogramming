#include<stdio.h>

void check_palindrome(int *original, int reversed)
{
 if(*original == reversed)
  printf("It Is Palindrome");
 else
  printf("It Is NOT Palindrome.");
}

void reverse(int num, int *reversed)
{
 int remainder;

 while(num!=0)
 {
  remainder = num % 10;
  *reversed =(*reversed*10) + remainder;
  num/=10;
 }

}

void input(int *num)
{
 printf("Enter the number : ");
 scanf("%d", num);
}

void main()
{

 int num, original, reversed=0;
 input(&num);
 original = num;
 reverse(num, &reversed);
 check_palindrome(&original, reversed);

}

