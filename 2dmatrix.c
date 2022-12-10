#include<stdio.h>
#include<conio.h>
void main(){
int ar[3][3];
int arr[3][3];
int a,b,c,d,e,f;
char g;
clrscr();
for(a=0;a<3;a++){
for(b=0;b<3;b++){
printf("\n Enter %d,%d element of 1st matrix=",a+1,b+1);
scanf("%d",&ar[a][b]);
printf("\nEnter %d,%d element of 2nd matrix=",a+1,b+1);
scanf("%d",&arr[a][b]);    
}}
printf("\n Enter 0 for sum of matrix\n Enter 1 for subtraction\n Enter 2 for Multiplication \n Enter 3 for sum of diagonals \n Enter 4 for Transpose of each matrix=");
scanf("%d",&c);
if(c>=0 || c <=3){
for(d=0;d<3;d++){
 printf("\n");
for(e=0;e<3;e++){
if(c==0){
printf("%d\t",ar[d][e]+arr[d][e]);}
else if(c==1)
printf("%d\t",ar[d][e]-arr[d][e]);
else if(c==2){
f=(ar[d][0]*arr[0][e]+ar[d][1]*arr[1][e]+ar[d][2]*arr[2][e]);
printf("%d\t",f);}
else if(c==3){
if(d==e)
printf("%d",ar[d][e]+arr[d][e]);
}}}
if(c==4){
for(a=0;a<3;a++){
printf("\n");
for(b=0;b<3;b++){
printf("%d\t",ar[b][a]);}}
printf("\n");
for(a=0;a<3;a++){
printf("\n");
for(b=0;b<3;b++){
printf("%d\t",arr[b][a]);}}
}

else
printf("Invalid choice");




getch();}
}


    