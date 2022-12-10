#include<stdio.h>
#include<conio.h>
 factorial(a)
{
int b,c=1;
if (a==0){
return 1;}
else if(a>0){
for (b=1;b<=a;b++){
c=c*b;}
return c;}
else
return 0;}


void main(){
int a;
clrscr();
printf("Enter a number=");
scanf("%d",&a);
printf("The factorial of given number is=%d",factorial(a));
getch(); }
