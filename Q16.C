#include<stdio.h>
#include<conio.h>
void main()
//q16
{
long double amt,e,t,g;
clrscr();
printf("Enter Your income::");
scanf("%Lf",&amt);
if (amt<=50000) {
printf("No tax ");
}
else if (amt>50000 && amt<=60000){
e=amt-50000;
t=0.1*e;
printf("\nTax to be paid is %Lf",t);
}
else if (amt>60000 && amt<=150000){
e=amt-60000;
t=0.2*e;
g=t+2000;
printf("\nTax to be paid %Lf",&g);
}
else {
e=amt-150000;
t=0.3*e;
g=t+19000;
printf("\nTax to be paid is %Lf",&g);}   +
getch();
}
