#include<stdio.h>
#include<conio.h>
void main()
{
char na[10];
int re,t,e,m,tot;
float av;
clrscr();
printf("Name:"); 
scanf("%s",&na);
printf("Reg No: ");
scanf("%d",&re); 
printf("Tamil: ");
scanf("%d",&t); 
printf("English: ");
scanf("%d",&e); 
printf("Maths: ");
scanf("%d",&m);
tot = t+e+m;
av=tot/3; 
printf("\nTotal =%d",tot);
printf("\nAvg =%f",av);
if(t>=40 && e>=40 && m>=40)
{
printf("\nPass"); 
if(av>=75)
printf("\nDis");
else if(av>=60 && av<75)
printf("\n1st class");
else if(av>=50 && av<60)
printf("\n2nd class");
else if(av>=40 && av<50)
printf("\n3rd class");
}
else
printf("\nFail");
getch();
}