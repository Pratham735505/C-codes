#include<stdio.h>
#include<conio.h>
//program to check whether entered no. is prime or not
void main()
{
int a,b,c;
printf("Enter a number::");
scanf("%d",&a);
c=0;
if (a==1 || a==2)
printf("%d is a prime no.",a);
for(b=2;b <a;b++){
if(a%b==0){
printf("%d is not a prime number",a);
c=1;
break;}
continue;
}
if(c==0)
printf("%d is a prime number",a);
getch();
}