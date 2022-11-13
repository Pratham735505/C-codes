#include<stdio.h>
#include<conio.h>
void main()
{
float mm,cm,m,km;
clrscr();
printf("Enter value in milimeter:");
scanf("%f",&mm);
cm=mm/10;
m=cm/100;
km=m/1000;
printf("Value in cm is %f\n",cm);
printf("Value in m is %f\n",m);
printf("Value in km is %f\n",km);
getch();
}