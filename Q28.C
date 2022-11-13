#include<stdio.h>
#include<conio.h>
void main(){
float a,b,c,d,e,f,g,h;
clrscr();
printf("Rate per hour::");
scanf("%f",&a);
printf("Total hours::");
scanf("%f",&b);
if (b<=35){
c=a*b;
printf("Wage of guard is %f",c);}
else if (b>35 && b<=55){
d=b-35;
e=d*2*a;
f=35*a;
g=f+e;
printf("Wage of guard is %f",g);}
else {
c=a*35;
e=2*a*20;
f=b-55;
g=f*2.5*a;
h=e+c+g;
printf("Wage of guard is %f",h);}
getch();}

