#include<stdio.h>

void output(int se, int pos, int f)
{
 if(f==0)
  printf("\nThe element %d is not found", se);
 else
  printf("\nThe element %d is found and its position is: %d", se, pos);
}

void binary_search(int e[], int *se, int n, int *f, int *pos)
{

  printf("Enter the element to search : ");
  scanf("%d", se);
  
  int low=0, high = n - 1, mid=0;

  while(low<=high)
  {
   mid=(low+high)/2;
   if(*se==e[mid])
    {
     *pos = mid+1;
     *f = 1;
     break;
    }
   else if(*se<e[mid])
    {
     high = mid - 1;
    }
   else
    low = mid + 1;
  }
 
}

void input(int e[],int *n)
{

  printf("Enter the number of element you are going to use : ");
  scanf("%d", n);
  
  printf("\nEnter %d elements into array : ",*n);
  for(int i=0;i<*n;i++)
   scanf("%d", &e[i]);

}

void main()
{
  int n, e[50], pos, se, f;
  //Search Element - se, pos - position, e - elements, n - no of elements, f - flag
  input(e,&n);
  binary_search(e, &se, n, &f, &pos);
  output(se, pos, f);
}
