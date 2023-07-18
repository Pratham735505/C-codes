#include<stdio.h>
#include <time.h>
#include <conio.h>
void delay(int number_of_seconds)
{
	//credit to gfg for this
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
 
    // Storing start time
    clock_t start_time = clock();
 
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}
 

int main(){
	//code to make a timer
	int t1,t,t2,j=-1,k=00,l=00;
	printf("\nEnter time in seconds:");
	scanf("%d",&t);
	t1=time(0);
	while(t2!=t){
		t2=time(0)-t1;
        delay(1);
        j++;
        if(j==60){
			j=0;
			k++;
		}
		if(k==60){
			k=0;
			l++;
		}
		system("cls");
		fflush(stdout);
		if(l>9){
			printf("%d :",l);
		}
		else{
			printf("0%d :",l);
		}
		if(k>9){
			printf("%d :",k);
		}
		else{
			printf("0%d :",k);
		}
		if(j>9){
			printf("%d\n",j);
		}
		else{
			printf("0%d\n",j);
		}
       // printf("%d : %d : %d\n",l,k,++j);
        
	}
	return 0;
}
