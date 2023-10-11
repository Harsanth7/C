#include<stdio.h>
#include<conio.h>
void main()
{
char ei[5],en[10],d[20],de[18]; 
int b,p,l,t,r,s;
clrscr();
printf("Emp.Id: ");
scanf("%s",&ei);
printf("Emp.No: ");
scanf("%s",&en) ;
printf("Designation: ");
scanf("%s",&d);
printf("Department: ");
scanf("%s",&de);
printf("Basic Salary: ");
scanf("%d",&b);
printf("PF: ");
scanf ("%d",&p);
printf("LIC: ");
scanf ("%d",&l);
printf("TA: ");
scanf("%d",&t);
printf("RA: ");
scanf("%d",&r);
s=t+r-p-l+b;
printf("\nSalary= %d",s);
getch();
}

    