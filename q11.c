#include<stdio.h>
#include<conio.h>
//q11
void main(){
float a,b,c,d;
printf("Enter for how many years you have worked::");
scanf("%f",&a);
printf("Enter your salary::");
scanf("%f",&b);
c=0.05 * b;
if (a>=10) {
d=c+500;
printf("Your Bonus is=%f",d);}
else { 
printf("Your Bonus is=%f",c);}
getch();
}