#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,d;
clrscr;
printf("Enter a number=");
scanf("%d",&a);
b=0;
c=1;
d=a;
for (c;c<a;c++)
{
if (a%c==0){
b=b+c;
}}

if(b==d)
printf("%d is a perfect number",d);
else
printf("%d is not a perfect number",d);

getch();
}