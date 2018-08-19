#include<stdio.h>
#include<math.h>

int input(float a[])
{
    printf("Enter the Co-efficients a,b,c respectively : ");
    scanf("%f%f%f",&a[0],&a[1],&a[2]);
}

void compute(float b[],float *determinent)
{
  *determinent=b[1]*b[1]-4*b[0]*b[2];
}

int output(float c[], float determinent)
{
    
    float alfa1=0,beta1=0;
    
    if(determinent==0)
     {
        printf("\nRoots Are Equal : ALPHA=BETA=%f",-c[1]/(2*c[0]));
     }
    else if(determinent<0)
     {
        printf("\nComplex Roots");
     }
    else
     {
        alfa1=(-c[1]+sqrt(determinent))/(2*c[0]);
        beta1=(-c[1]-sqrt(determinent))/(2*c[0]);
        printf("\n\n Alpha = %f\n Beta=%f\n",alfa1,beta1);
     }
}

int main()
{
    float e[3],determinent;
    
    input(e);
    compute(e,&determinent);
    output(e,determinent);
    return 0;
}
