#include<stdio.h>
#include<conio.h>
struct employee {
char name[20];
int id;
float sal;};
void main() {
struct employee e[10];
int i;
clrscr();
for(i=0;i<10;i++){  //for entry in array e
printf("Enter the details of %d employee\n",i+1);
printf("Name=");
scanf("%s",&e[i].name);;
printf("Id=");
scanf("%d",&e[i].id);
printf("Salary=");
scanf("%f",&e[i].sal);
}

for(i=0;i<10;i++){  //Printing the details of employee
printf("\nThe details of %d employee are \nName=%s \nID=%d \nSalary=%f",i+1,e[i].name,e[i].id,e[i].sal);
}
getch();}