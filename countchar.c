#include<stdio.h>
#include<conio.h>
void main(){
int i,n,g,a=0;
char c[20];
fflush(stdin);
clrscr();
printf("Enter a string=");
gets(c);
g=0;
for(i=0;i<20;i++){
  if(c[i]=='\0'){
    break;
    }
  else{
    a++;
    }
  }
for(n=0;n<a;n++)  {                         /*For counting character*/
  if( c[n]!=' '){
    g++;
    }
  }
printf("The total characters is given string are=%d",g);


getch();}