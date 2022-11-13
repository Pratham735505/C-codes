#include<stdio.h>
#include<conio.h>
#define B t=amt*28;
#define A printf("Total bill is %f",t);
int main()
{
    int unit;
    float amt,t;
clrscr();
    printf("Enter total units consumed: ");
    scanf("%d", &unit);
    if(unit <= 100)
    {
        amt = 250;
B
A
    }
    else if(unit <= 150&& unit>100)
    {
        amt = 250 + ((unit-100) * 0.4);
B
A
    }
    else if(unit <= 200&& unit>150)
    {
        amt = 270 + ((unit-150) * 0.5);
B
A
    }
    else
    {
        amt = 295 + ((unit-200) * 0.60);
B
A
    }

    getch();
}