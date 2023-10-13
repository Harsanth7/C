#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter no 1 to 5: ");
scanf("%d",&a); 
if(a==1)
printf("\nOne");
else if(a==2) 
printf("\nTwo");
else if (a== 3)
printf("\nThree");
else if (a==4)
printf("\nFour");
else if(a==5)
printf("\nFive");
else
printf("\nNot valid");
getch();
}

    