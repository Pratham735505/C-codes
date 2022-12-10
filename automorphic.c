#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,d,e;
clrscr;
printf("Enter a number=");
scanf("%d",&a);
b=a%10;
c=a*a;
if(c%10==b)
printf("The number is automorphic");
else
printf("The number is not automorphic");
getch();
}