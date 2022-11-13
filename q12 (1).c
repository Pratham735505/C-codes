#include<stdio.h>
#include<conio.h>
//q12
void main(){
float a,b,c;
printf("Enter your sales::");
scanf("%f",&a);
printf("Enter your grade::");
scanf("%f",&c);
if (a>10000 && c==1) {
b=0.1*a;
printf("The commission is %f",b);}
else if (a>10000 && c==2){
b=0.08*a;
printf("The commission is %f",b);
}
else {
b=0.05*a;
printf("The commission is %f",b); }
getch();
}