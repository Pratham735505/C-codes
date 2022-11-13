#include<stdio.h>
#include<conio.h>
//Q33
void main(){
double sale,com;
clrscr();
printf("Enter total sales=");
scanf("%lf",&sale);
if (sale<=10000){
com=0.02*sale;
printf("Commission rate is 2 percent and commission is= %lf",com);
}
else if (sale>10000 && sale<=20000){
com=0.03*sale;
printf("Commission rate is 3 percent and commission is= %lf",com);
}
else if(sale>20000 && sale<=50000){
com=0.05*sale;
printf("Commission rate is 5percent and commission is= %lf",com);
}
else if(sale>50000 && sale<=70000){
com=0.08*sale;
printf("Commission rate is 8 percent and commission is=%lf",com);
}
else {
com=0.1*sale;
printf("Commission rate is 10 percent and commission =%lf",com);
}
getch();


}