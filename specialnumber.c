#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,d,e;
clrscr;
printf("Enter a number=");
scanf("%d",&a);
d=0;
e=a;
while (a>0){
c=1;
b=a%10;
while(b>0){
c=c*b;
b=b-1;}
d=d+c;

a=a/10;
}
if(d==e){
printf("%d is special number",e);}
else
printf("%d is not a special number",e);
getch();
}