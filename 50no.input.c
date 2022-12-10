#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,d,e;
clrscr();
for(a=1;a <51;a++){
printf("\nEnter a number=");
scanf("%d",&b);
if(b>0 && b <=10)
printf("\n%d is between 0 to 10",b);
else if(b>11 && b <=20)
printf("\n %d is between 10 to 20");
else if(b>21 && b <=30)
printf("\n %d is between 20 to 30");
else if(b>31 && b <=40)
printf("\n %d is between 30 to 40");
else if(b>41 && b <=50)
printf("\n %d is between 40 to 50");
else if(b>51 && b <=60)
printf("\n %d is between 50 to 60");
else if(b>61 && b <=70)
printf("\n %d is between 60 to 70");
 else if(b>71 && b <=80)
printf("\n %d is between 70 to 80");
 else if(b>81 && b <=90)
printf("\n %d is between 10 to 20");
 else if(b>91 && b <=100)
printf("\n %d is between 10 to 20");
else 
printf("\n %d is greater than 100");}
getch();
}