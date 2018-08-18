#include<stdio.h>
#include<math.h>

struct equation
{
    
  float a,b,c,determinent,alfa1,beta1;
  
};

int input()
 {
  struct equation eqan;  
  printf("Enter a, b, c respectively : ");
  scanf("%f%f%f",&eqan.a,&eqan.b,&eqan.c);
 }
  
int compute()
 {
  struct equation eqan;
  eqan.determinent=eqan.b*eqan.b-4*eqan.a*eqan.c;
 }
  
int output()
 {
  struct equation eqan;
  if(eqan.determinent==0)
    printf("\n ALPHA=BETA=%f",-eqan.b/(2*eqan.a));
  else if(eqan.determinent<0)
    printf("\n Complex Roots");
  else
    {
     eqan.alfa1=(-eqan.b+sqrt(eqan.determinent))/(2*eqan.a);
     eqan.beta1=(-eqan.b-sqrt(eqan.determinent))/(2*eqan.a);
     printf("\n\n Alpha = %f\n Beta=%f\n",eqan.alfa1,eqan.beta1);
    }
 }
int main()
{   
    input();
    compute();
    output();
    getch();

    return 0;
}
