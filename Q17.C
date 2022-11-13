#include<stdio.h>
#include<conio.h>
//q17
void main()
{
int a;
clrscr();
printf("Enter water consumed in gallons::");
scanf("%d",&a);
if (a<=50){
printf("No tax");
}
else if (a>50 && a<=100){
printf("Tax rate is 100");
}
else if (a>100 && a<=200){
printf(" Tax rate is 800");
}
else if (a>200 && a<=300){
printf(" Tax rate is 1100");
}
else {
printf("Tax rate is 1700");}
getch();
}