#include<stdio.h>
#include<conio.h>
//q13
void main(){
float a,b;
printf("Enter your age::");
scanf("%f",&a);
printf("Enter distance::");
scanf("%f",&b);
if (a<=10){
if (b<=50){
printf("Fare is 5");
}
else if (b>50 && b<100)
{printf("Fare is 10");
}else{
printf("Fare is 15");}
}
else if (a>10 && a<=50){if (b<=50){
printf("Fare is 10");
}
else if (b>50 && b<100)
{printf("Fare is 15");
}else{
printf("Fare is 20");}
}
else {
 if (b<=50){
printf("Fare is 15");
}
else if (b>50 && b<100)
{printf("Fare is 20");
}else{
printf("Fare is 25");}
}



getch();
}