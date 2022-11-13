#include<stdio.h>
#include<conio.h>
#define A printf("\nDriver will be insured");
//q21
void main(){
int age;
char m,g;
clrscr();
printf("Enter your age::");
scanf("%d",&age);
printf("\nMarried press Y if yes \,N if no ::");
m=getche();
printf("\nEnter M if male,F is Female::");
g=getche();
if (m=='Y'){A}
else if (m=='N' && g=='M'){
if (age>30){
A}}
else if (m=='N' && g=='F'){
if (age>25){A}}
else {printf("Driver will not be insured");}
getch();}