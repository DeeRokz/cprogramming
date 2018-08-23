#include<stdio.h>
#include<conio.h>

void print_triangle(int rows)
{
    int a=(rows+(rows-1));
    
    clrscr();
    
    for(int i=0;i<a;i++)
    {
        for(int j=1;j<=rows;j++)
        {
          gotoxy((a/2)+2-j,j);
          for(int k=1;k<=j*2-1;k++)
          printf("*");
        }
    }
}

void main()
{
    int rows;
    
    printf("Enter the number of Rows : ");
    scanf("%d",&rows);
    
    print_triangle(rows);
}