#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter a: ");
scanf("%d",&a);
printf("Enter b: ");
scanf("%d",&b);
if(a>b)
printf("\nA is big");
else if(b>a)
printf("\nB is big");
else
printf("\nA=B" );
getch();
}

    