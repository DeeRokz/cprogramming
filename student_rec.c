#include<stdio.h>

struct student
{
 int roll_no;
 float marks;
 char name[30], dept[30], grade[3];
};

void add_rec(struct student std[])
{
 int n; 

 printf("\nHow many records you wanna enter? max 10 : ");
 scanf("%d", &n);

 for(int i=0; i<n; i++)
 {
  printf("\n\nRecord %d : ", i+1);
  printf("\n--------------------------------------------");
  printf("\nEnter the Roll No.   : ");
  scanf("%d", &std[i].roll_no);
  printf("\nEnter the Name       : ");
  scanf("%s", std[i].name);
  printf("\nEnter the Marks      : ");
  scanf("%f", &std[i].marks); 
  printf("\nEnter the Department : ");
  scanf("%s", std[i].dept);
  printf("\nEnter the Grade      : ");
  scanf("%s", std[i].grade);
 }
}

void search_rec(struct student std[])
{
 int roll;
 printf("\nEnter the roll no to begin searching : ");
 scanf("%d", &roll);
 
 for(int i=0; i<10; i++)
  {
   if(roll==std[i].roll_no)
    {
     printf("\nRoll Number     : %d", std[i].roll_no);
     printf("\nName            : %s", std[i].name);
     printf("\nMarks           : %f", std[i].marks);
     printf("\nDepartment      : %s", std[i].dept);
     printf("\nGrade           : %s", std[i].grade);
    }
  }
}

void main()
{
 int choice;
 struct student std[10];
 do
 {
  printf("\n\n\nMain Menu");
  printf("\n1. Add Record");
  printf("\n2. Search Record");
  printf("\n3. Exit");
  printf("\n\nEnter your Choice : ");
  scanf("%d", &choice);
  
  switch(choice)
  {
   case 1 : add_rec(std);
            break;
   case 2 : search_rec(std);
            break;
   case 3 : break; 
  }
 }while(choice!=3);
}
