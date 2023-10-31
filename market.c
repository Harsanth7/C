#include<stdio.h>
#include<conio.h>
void main()
{
int s,q;
char pro[15];
float p,a,d,pa;
clrscr();
printf("S.No."); 
scanf("%d",&s);
printf("Product Name:"); 
scanf("%s",&pro); 
printf("Price: "); 
scanf("%f",&p); 
printf("Quantity: ");
scanf("%d",&q);
a=p*q; 
if(a >=10000)
d=3.7*a/100;
else if(a>=5000 && a<10000)
d=2.4*a/100;
else if(a>=2000 && a<5000)
d=1.9*a/100;
else if(a>=1000 && a<2000)
d =0.8*a/100 ;
else if(a<1000)
d=0*a /100;
printf("\n Discount = %f",d);
printf("\n Amount =%f",a);
pa= a-d;
printf("\nPay Amount =%f",pa);
getch();
}
