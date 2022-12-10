#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c;
clrscr;
printf("Enter a number=");
scanf("%d",&a);
c=0;
while (a>0){
b=a%10;
if (b==0){
c=c+1;}
a=a/10;
}
printf("No. of zeroes are %d",c);


getch();
}