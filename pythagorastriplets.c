#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,d,e,f;
for(a=1;a<501;a++){
for(b=1;b<501;b++){
for(c=1;c<501;c++){
d=a*a+b*b;
f=c*c;
if(f==d)
printf("The pythagoras triplets are %d,%d,%d\n",a,b,c);


}


}


}
getch();
}