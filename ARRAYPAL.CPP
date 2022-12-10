#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
int arr[5],a,b=0,f,h,c,d,g;
clrscr();
for (a=0;a<5;a++){
printf("\n");
printf("Enter %d element of array=",a+1);
scanf("%d",&arr[a]);
b=b+arr[a];
c=arr[a];
d=0;
g=0;
while (c>0){
f=c%10;
g=g+(f*pow(10,d));
d++;
c=c/10;}
if (g==arr[a]){
printf("\n");
printf("%d is a palindrome number",arr[a]);}
else if (arr[a]==0){
printf("\n");
printf("0 is palindrome");}
else
{
printf("\n");
printf("%d is not a palindrome",arr[a]);
}}
printf("\nThe diference of first and last number is=%d",arr[0]-arr[4]);
getch();
}