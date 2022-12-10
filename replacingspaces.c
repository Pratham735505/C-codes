#include<stdio.h>
#include<conio.h>
void main(){
int n;
char c[20];
clrscr();
printf("Enter a string=");
gets(c);
for(n=0;n<20;n++)  {                         //For checking spaces and replacing it
if( c[n]==' ')
c[n]='#';}
puts(c);


getch();}