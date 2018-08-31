#include<stdio.h>

void input(char *vehicle, int *hours)
{
 printf("Enter the vehicle : ");
 scanf("%c", vehicle);
 printf("Enter the hours : ");
 scanf("%d", hours);
}

void get_fare(char vehicle, int hours, int *fare)
{
 *fare=0;
 if(vehicle=='c'||vehicle=='C')
  {
   if(hours<=2)
    *fare=20*hours;
   else if(hours>2)
    *fare=(20*2)+(30*(hours-2));
  }

 else if(vehicle=='b'||vehicle=='B')
  {
   if(hours<=4)
    *fare=40*hours;
   else if(hours>4)
    *fare=(40*4)+(50*(hours-4));
  } 

 else if(vehicle=='t'||vehicle=='T')
  {
   if(hours<=3)
    *fare=30*hours;
   else if(hours>4)
    *fare=(30*3)+(40*(hours-3));
  } 
}

void output(int fare)
{
 printf("Parking Fare is : %d", fare);
}

void main()
{
 int hours, fare;
 char vehicle;

 input(&vehicle, &hours);
 get_fare(vehicle, hours, &fare);
 output(fare);
}
