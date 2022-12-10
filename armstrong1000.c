    #include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c,d;
a=1;
for(a;a <1001;a++){
b=0;
c=a;
while (c>0){
d=c%10;
b=b+d*d*d;
c=c/10;
}
if (b==a){
printf("%d\n",a);
}}
getch ();}