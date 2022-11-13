#include<stdio.h>
#include<conio.h>
//Q27
void main(){
float a,b,c,d,e,f;
clrscr();
printf("Total calls\n");
scanf("%f",&a);
if (a<=100){
b=a*1;
printf("Total charge is %f",b);}
else if (a>100 && a<=150)
{c=a-100;
d=2*c;
e=100+d;
printf("Total charge is %f",e);}
else{
c=a-150;
d=2.5*c;
e=200+d;
printf("Total charge is %f",e);}
getch();}