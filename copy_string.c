#include<stdio.h>

void input(char string1[])
{
 printf("Enter a String : ");
 scanf("%s", string1);
}

void output(char string2[])
{
 printf("Copied String : %s", string2);
}

void copy_string(char string1[], char string2[])
{
 for(int i=0; string1[i]!='\0'; ++i)
  string2[i]=string1[i];
 //*string2[i]='\0';
}

void main()
{
 char string1[50], string2[50];
 input(string1);
 copy_string(string1, string2);
 output(string2);
}
