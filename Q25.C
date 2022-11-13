#include<stdio.h>
#include<conio.h>
//Q25
void main(){
int a,b;
clrscr();
printf("Enter first number::");
scanf("%d",&a);
printf("\nEnter second number::");
scanf("%d",&b);
(a>b)?printf("A=%d is greater than B=%d",a,b):printf("B=%d is greater than A=%d",b,a);
getch();}