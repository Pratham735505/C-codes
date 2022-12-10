#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,d;
clrscr;
printf("Enter a number=");
scanf("%d",&a);
c=a;
d=0;
while (a>0){
b=a%10;
d=d+b;
a=a/10;
}
if(d==1 || d==10)
printf("The number is magic number");
else
printf("The number is not magic number");
getch();
}