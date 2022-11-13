#include<stdio.h>
#include<conio.h>
void main()
{
char grade;
long int sal;
printf("Enter Grade from A B C: \n");
scanf("%ch",&grade);
printf("Enter Basic Salary:\n");
scanf("%ld",&sal);
if(grade=='A'){
printf("Net salary=%ld",sal+300);
}
else if(grade=='B'){
 printf("Net Salary=%ld",sal+250);
}
else{
printf("Net Salary=%ld",sal+100);
}
getch();}

