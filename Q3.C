#include<stdio.h>
#include<conio.h>
//Q3
void main(){
int n;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
if (n%8==0){
printf("The number is divisible by 8 \n");
}
else{
printf("The number is not divisble by 8 \n");
}
getch();
}