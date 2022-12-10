/*Write a C program to input a number and check if it is a strong number using functions*/
#include<stdio.h>
#include<conio.h>
int fact(int n);
int strong (int y);
void main(){
int a;
printf("Enter a number=");
scanf("%d",&a);
strong(a);
getch();}

int strong (int y){ //for checking strong number
int g,d,e=0;
g=y;
while(y>0){
d=y%10;
e=e+fact(d);
y=y/10;
}
if(g==e)
printf("%d is a strong number",g);
else
printf("%d is not a strong number",g);


}



int fact(int n){  //for factorial
if(n==0)
return 1;
else if(n==1)
return n;
else if(n<0)
printf("wrong input");
else
return n*fact(n-1);

}