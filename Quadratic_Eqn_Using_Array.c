#include<stdio.h>
#include<math.h>

int input(float a[])
{
    printf("Enter the Co-efficients a,b,c respectively : ");
    scanf("%f%f%f",&a[0],&a[1],&a[2]);
}

void compute(float b[],float *determinent,float *alfa1,float *beta1,int *f)
{
  *determinent=b[1]*b[1]-4*b[0]*b[2];
    if(determinent==0)
     {
        alfa1=-c[1]/(2*c[0]);
        f=0;
     }
    else if(determinent>0)
     {
        alfa1=(-c[1]+sqrt(determinent))/(2*c[0]);
        beta1=(-c[1]-sqrt(determinent))/(2*c[0]);
        f=1;
     }
    else
     {
        f=2;
     }
}

int output(float c[], int f,float alfa1,float beta1)
{
    
    if(f==0)
     {
        printf("\nRoots Are Equal : ALPHA=BETA=%f",alfa1);
     }
    else if(f==1)
     {
        printf("\nComplex Roots");
     }
    else
     {
        printf("\n\n Alpha = %f\n Beta=%f\n",alfa1,beta1);
     }
}

int main()
{
    float e[3],determinent;
    float alfa1=0,beta1=0;
    int f=0;
    input(e);
    compute(e,&determinent,&alfa1,&beta1,&f);
    output(e,determinent,alfa1,beta1);
    return 0;
}
