#include<stdio.h>
#include<conio.h>
void main()
  { 
   int year;
   printf("Enter the year");
   scanf("%d",&year);
   if(year%4==0)
     {
      printf(" is leap year");
      }
   else
     {
       printf("is not a leap year");
     }
}
