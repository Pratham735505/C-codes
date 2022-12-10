#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,d;
clrscr;
printf("Enter a number=");
scanf("%d",&a);
c=a;
while (a>=1){
b=a%10;
if (b<c){
d=b;}
else
d=c;
c=b;
a=a/10;}
printf("The smallest number digit is %d",d);

getch();
}