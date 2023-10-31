#include<stdio.h>
#include<conio.h>
void main()
{
int b,p,c,u;
char na[10];
float co,amt;
clrscr();
printf("Bill No: "); 
scanf("%d",&b); 
printf("C.Name: "); 
scanf("%s",&na); 
printf("P.unit: "); 
scanf("%d",&p); 
printf("C.unit: "); 
scanf("%d",&c);
u=c-p;
if(u<=100)
  co=1.60;
else if(u>=101 && u<=500)
  co=2.75;
else if(u>=501 && u<=1000)
  co=3.50;
else if(u>1000)
  co=4.75;
printf("\nCost =%f",co);
amt=u*co;
printf("\nUsed unit =%d",u);
printf("\nAmount =%f",amt);
getch();
}
