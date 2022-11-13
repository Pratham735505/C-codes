#include<stdio.h>
#include<conio.h>
#define A a*q 
#define B p*b
//Q31
void main(){
float a,b,c,p,q,r,l1,l2,x,y,d;
clrscr();
printf("Enter value of a,b,c in ax+by=c::");
scanf("%f,%f,%f",&a,&b,&c);
//for 2nd eqn
printf("Enter value of p,q,r in px+qy=r::");
scanf("%f,%f,%f",&p,&q,&r);
d=A-B;
if (d!=0){
l1=(b*r)-(c*q);
l2=(c*p)-(a*r);
x=l1/d;
y=l2/d;
printf("Point of intersection of lines are %f,%f",x,y);
}
else if (d==0 && (b*r)==(c*q)){
printf("Infinitely many solutions");
}
else {
printf("No solutions");
}
getch();
}