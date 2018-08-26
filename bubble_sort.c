#include<stdio.h>

void output(int elements[],int noofelements)
{
  printf("Sorted Array : \n");
  for(int i=0;i<noofelements;i++)
   printf("%d ", elements[i]);
}

void bubble_sort(int elements[],int noofelements)
{
  int temp;
   
  for(int i=noofelements-2;i>=0;i--)
   for(int j=0;j<=i;j++)
    if(elements[j]>elements[j+1])
     {
       temp=elements[j];
       elements[j]=elements[j+1];
       elements[j+1]=temp;
     }

  output(elements,noofelements);
}

void input()
{

 int noofelements; // noofelements represents 'Number of elements'

 printf("Enter the number of elements you are going to use : ");
 scanf("%d", &noofelements);
 
 int elements[noofelements];
 
 printf("Enter the %d Elements : ", noofelements);
 for(int i=0;i<noofelements;i++)
  scanf("%d", &elements[i]);

 bubble_sort(elements,noofelements);

}

void main()
{
 input(); 
}
