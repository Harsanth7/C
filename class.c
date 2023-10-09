#include<stdio.h>
#include<conio.h>
void main()
{
    char na[10];
    int re,t,e,m,tot;
    float av;
    clrscr();
    printf("Name: ");
    scanf("%s",&na);
    printf("\nReg.No: ");
    scanf("%d",&re);
    printf("\nTamil: ");
    scanf("%d",&t);
    printf("\nEnglish: ");
    scanf("%d",&e);
    printf("\nMaths: ");
    scanf("%d",&m);
    tot=t+e+m;
    av=tot/3;
    printf("\nTotal =%d",tot);
    printf("\n Avg =%f", av);
    getch();
}
