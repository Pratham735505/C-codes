#include<stdio.h>
#include<conio.h>
//q9
void main(){
float a,c;
printf("Enter salary::");
scanf("%f",&a);
if (a<10000){
c=0.05*a;
printf("The commission at the end of the month is %f",c);
}
else{
c=0.1*a;
printf("The commission at the end of the month is %f",c);
}
getch();
}