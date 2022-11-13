#include<stdio.h>
#include<conio.h>
//q14
void main(){
float a;
char n;
printf("Enter your name::");
scanf("%c",&n);
printf("Enter your average marks::");
scanf("%f",&a);
if (a>=90){
printf("Congratulations you got A+");}
else if (a<90 && a>=80){
printf("Congratulations you got A");}
else if (a>=70 && a<80){
printf(" You got B+");}
else if (a<70 && a>=60){
printf("You got B");}
else if (a>=50 && a<60){
printf("You got C");}
else{
printf("Failed");}

getch();
}