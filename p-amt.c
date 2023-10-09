#include<stdio.h>
#include<conio.h>
void main()
{
    int p,n;
    float r,sim,su;
    clrscr();
    printf("Principle Amount: ");
    scanf("%d",&p);
    printf("No.of Yrs: ");
    scanf("%d",&n);
    printf("Rate of int: ");
    scanf("%f",&r);
    sim=p*n*r/100;
    printf("\nSim.Int =%f",sim);
    su=sim+p;
    printf("\nSum =%f", su);
    getch();
}
