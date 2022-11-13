#include<stdio.h>
#include<conio.h>
#define A printf("\nTotal charge is::%d paise",g);
//Q24
void main(){
int d,g;
clrscr();
printf("Enter number of days after which book is returned::");
scanf("%d",&d);
if (d<=5){
g=40*d;
A}
else if (d>5 && d<=10){
g=65*d;
A}
else{
g=80*d;
A}
getch();
}