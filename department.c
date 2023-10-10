#include<stdio.h>
#include<conio.h>
void main()
{
int s,q;
char pro[15];
float p,a; 
clrscr();
printf("S.NO: ");
scanf("%d",&s);
printf("Product Name: "); 
scanf("%s",&pro);
printf("Price: ");
scanf("%f",&p);
printf("Quantity: ");
scanf("%d",&q);
a= p*q;
printf("\nAmount= %f",a);
getch();
}

    