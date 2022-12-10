#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c=2;
clrscr();
for (a=1;a<6;a++){
for (b=1;b<6;b++){
if(b>=c){
printf(" ");}
else
printf("*");

}
c++;
printf("\n");
}getch();
}

