#include<stdio.h>
#include<conio.h>
int main()
{
float sale,com;
clrscr ();
printf ("Enter Your Monthly sales:");
scanf ("%f",&sale);
if (sale>=10000){
com=0.1*sale;
printf("Commission awarded is =%f\n",com);
}
else{
printf("No commission awarded");
}
getch ();
}
    