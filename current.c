#include<stdio.h>
#include<conio.h>
void main()
{
int b,p,c,u;
char na[10];
float co,amt;
clrscr();
printf("Bill.No: ");
scanf("%d",&b);
printf("C.Name: ");
scanf("%s",&na);
printf("P.unit: ");
scanf("%d",&p);
printf("C.unit: ");
scanf("%d",&c);
printf("Cost: ");
scanf("%f",&co);
u= c-p;
amt= u*co;
printf("\nUsed unit=%d",u);
printf("\nAmount=%f",amt);
getch();
}

    