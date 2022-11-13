#include<stdio.h>
#include<conio.h>
//Q26
void main(){
int a,b,c;
clrscr();
printf("Enter 3 number::\n");
scanf("%d,%d,%d",&a,&b,&c);
if (a>b){
if (a>c){printf("A is greatest");}
else {
printf("C is greatest");}}
else{
if (b>c) {printf("B is greatest");}
else{
printf("C is greatest");}
}
getch();}