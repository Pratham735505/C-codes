#include<stdio.h>
#include<conio.h>
//q18
void main()
{
float a,b,c,d,e,f;
clrscr();
printf("For season spring press 1\n For season summer press 2\n For autumn Press 3 \n For winter press 4\n");
scanf("%f",&a);
printf("Enter no. of days for which cycle is hired");
scanf("%f",&b);
if (a==1){
c=b*4;
d=c+100;
if (b>10) {
e=0.3*d;
f=d-e;
printf("Total charge is %f",f);}
else{
printf("Total charge is %f",d);}}
else if (a==2){
c=b*7;
d=c+100;
if (b>10) {
e=0.3*d;
f=d-e;
printf("Total charge is %f",f);}
else {
printf("Total charge is %f",d);}
}
else if (a==3){
c=b*3;
d=c+100;
if (b>10){
e=0.3*d;
f=d-e;
printf("Total charge is %f",f);}
else {
printf("Total charge is %f",d);}}
else if (a==4){
c=b*2;
d=c+100;
if (b>10){
e=0.3*d;
f=d-e;
printf("Total charge is %f",f);}
else {
printf("Total charge is %f",d);}}
else {
printf("Invalid choice");}
getch();
}