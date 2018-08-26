#include<stdio.h>

void print_grade(int marks)
{
  if(marks>=95)
   printf("Grade = A1");
  else if(marks>85&&marks<=95)
   printf("Grade = A2");
  else if(marks>75&&marks<=85)
   printf("Grade = B1");
  else if(marks>60&&marks<=75)
   printf("Grade = B2");
  else if(marks>45&&marks<=60)
   printf("Grade = C1");
  else if(marks>40&&marks<=45)
   printf("Grade = C2");
  else if(marks>35&&marks<=40)
   printf("Grade = D1");
  else if(marks>30&&marks<=35)
   printf("Grade = D2");
  else
   printf("Grade = E1 (Fail)");
}

void input()
{

  int marks;
  printf("Enter the Marks : ");
  scanf("%d", &marks);
  
  print_grade(marks);

}

void main()
{
 input();
}

