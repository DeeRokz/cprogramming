#include<stdio.h>
#include<conio.h>
#include<math.h>

int output(float result,float a,float b,float c)
{
  float alfa1=0,beta1=0;
  if(result==0)
    {
        printf("\n ALPHA=BETA=%f",-b/(2*a));
    }
    else if(result<0)
    {
        printf("\n Imaginary Roots");
    }
    else
    {
        alfa1=(-b+sqrt(result))/(2*a);
        beta1=(-b-sqrt(result))/(2*a);
        printf("\n\n Alpha = %f\n Beta=%f\n",alfa1,beta1);
    }
}

int compute(float a,float b,float c)
{
  float determinent;
  determinent=b*b-4*a*c;
  output(determinent,a,b,c);
}

int input()
{
  float a, b, c;
  printf("Enter a, b, c respectively : ");
  scanf("%f%f%f",&a,&b,&c);
  compute(a,b,c);
}

int main()
{
    input();
    getch();

    return 0;
}
