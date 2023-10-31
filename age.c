#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();
printf("Enter age 18-65: ");
scanf("%d",&age);
if (age>=18 && age<=65)
   {
   printf("\nEligible"); 
if(age>=18 && age<=35)
   printf("\nYoung");
else if(age>=36 && age<=55)
printf("\nMiddle");
else if(age>=56 && age<=65)
printf("\nold");
   }
else
printf("\aNot Eligible");
getch();
}