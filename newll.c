#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Nodes and functions for simple linked list
struct node {
    int num;
    struct node *next;
}*start=NULL;
struct node *front=NULL;
struct node *temp;
struct node *q;
struct node *prev;
struct node *d;
struct node *j;
struct node *k;
void insertion();
void deletion();
void display();
int count=0;


void bsort();
void isort();
void ssort();

void lsearch();
void bisearch();


int main() {
    int i,j,k,l;
    clrscr();
    do{
    
    printf("\n\n\n\n\t\tLinked List Program\n\t\t-->©Pratham 722008\n\n\n");
    printf("\n1.Simple linked list\n2.Sorting\n3.Searching\n4.Exit\n");
    scanf("%d",&i);
   // fflush(stdin);
        switch(i) {
//Simple Linked List
        case 1:
            do {
                printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
                scanf("%d",&j);
                switch(j) {
                case 1:
                    insertion();                    
                    break;
                case 2:
                    deletion();
                    break;
                case 3:       
                    display();
                    break;
                case 4:
              //      exit(0);
                    break;
                default:
                    printf("\nWrong entry\n");
                }
            } while(j!=4);
            break;
        case 2:
        do{
            printf("\n1.Bubble Sort \n2.Insertion Sort\n3.Selection Sort\n4.Exit\nEnter Choice:");
            scanf("%d",&k);
            switch(k){
                case 1:
                bsort();
                break;
                case 2:
                isort();
                break;
                case 3:
               ssort();
                break;
                case 4:
           //     exit(0);
                default:
                printf("\nInvalid Choice\n");
            }
        }while(k!=4);
            break;
        case 3:
        do{
        printf("\n1.Linear Search\n2.Binary Search\n3.Exit\nEnter Choice:");
        scanf("%d",&l);
        switch(l)
          {
              case 1:
              lsearch();
              break;
              case 2:
              //bsearch();
              break;
              case 3:
              exit(0);
              default:
              printf("\nInvalid Choice\n");
          }
        }while(l!=3);
          break;
        case 4:
            exit(0);
        default:
            printf("\nEnter right choice\n");
        }
    } while(i!=5);
    return 0;
   
}



void insertion () {
  struct node *f;
    int z,k,i;
    printf("\n1.Insertion at the end\n2.Insertion at the start\n3.Insertion at a specific place\n");
    scanf("%d",&z);
    
    switch(z) {
    case 1: //Insertion from end
        
        if(start==NULL) {
          f=(struct node*)malloc(sizeof(struct node));
          printf ("\nFirst element\n");
        printf("\nEnter the value\n");
        scanf("%d",&f->num);
            start=f;
            q=start;
            q->next=NULL;
            count++;
        }
        else
        {
          f=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the value\n");
        scanf("%d",&f->num);
            q->next=f;
            q=f;
            q->next=NULL;
            count++;
        }



        break;
    case 2: //Insertion from start
    if(start==NULL) {
          f=(struct node*)malloc(sizeof(struct node));
          printf ("\nFirst element\n");
        printf("\nEnter the value\n");
        scanf("%d",&f->num);
            start=f;
            q=start;
            count++;
        }
        else
        {
          f=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the value\n");
        scanf("%d",&f->num);
        f->next=start;
        start=f;
        count++;
        }
        break;
        
    case 3: //Insertion in between
      printf("\nEnter at which position you want to insert\n");
      scanf("%d",&k);
      if(k==1){
        if(start==NULL) {
          f=(struct node*)malloc(sizeof(struct node));
          printf ("\nFirst element\n");
        printf("\nEnter the value\n");
        scanf("%d",&f->num);
            start=f;
            q=start;
            count++;
            }
        else{
        f=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the value\n");
        scanf("%d",&f->num);
        f->next=start;
        start=f;
        count++;
        }
      }
      else if(k>count+1){
        printf ("\nThere are not enough elements\n");
      }
      else if(k==count+1){
        f=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the value\n");
        scanf("%d",&f->num);
            q->next=f;
            q=f;
            count++;
      }
      else {
         for(i=1;i<k;i++){
           start=start->next;
           if(i==k-1){
             d=start;
             break;
           }
         }
        f=(struct node*)malloc(sizeof(struct node));
             printf("\nEnter the value\n");
             scanf("%d",&f->num);
             f->next=d->next;
             d->next=f;
        count++;
      }




        break;
    default:
        printf("\nInvalid choice\nNow enter again\n");
    }
}







void deletion() {
    int z,n,i,k;
    if(start==NULL){
      printf ("\nLinked list in empty");
    }
    else{
    printf("\n1.Deletion at the end\n2.Deletion at the start\n3.Deletion at a specific place\n");
    scanf("%d",&z);
    switch(z) {
    case 1: //Deletion from end
       
         
        n=q->num;
        printf("\nThe deleted element is %d\n",n);
         free(q);
          if(count==1){
          start=NULL;
        }

      count--;





        break;
    case 2: //Deletion from start
         temp=start->next;
         n=start->num;
         printf("The deleted element is %d",n);
         free(start);
         start=temp;
         if(count==1){
          start=NULL;
        }
count--;


        break;
    case 3: //Deletion in between
          printf("\nEnter at which position you want to insert\n");
      scanf("%d",&k);
      




        break;
    default:
        printf("\nInvalid choice\nNow enter again\n");
    }
    }
}


void display(){
    //struct node *temp,*a;
   // temp=start;
   front=start;
    if(start==NULL)
{
        printf("\nEmpty Linked List\n");
        }
    else
    {
      printf ("\nThe elements of Linked list are\n");
         do{
            printf("\t%d\t",start->num);
            start=start->next;
        }while(start!=NULL);
    }
    start=front;
}


void ssort(){
    
    int i,d,e;
    if(start==NULL){
        printf("\nEmpty Linked List\n");
    }
    else{
            j=start;
          k=front;
        for(i=0;i<count;i++){
            for(d=0;d<count;d++){
                if(j->num>k->num){
                    e=j->num;
                    j->num=k->num;
                    k->num=e;
                }
                k=k->next;
            }
            j=j->next;
            k=j->next;
        }
    }
    
}


void bsort(){
    int i,j,l,n=0;;
    struct node *e;
    if(start==NULL){
        printf("\nLl is empty\n");
    }
    else{
    e=start;
    while(e!=NULL){
        n++;
        e=e->next;
    }
    e=start;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(e->num>e->next->num){
                l=e->num;
                e->num=e->next->num;
                e->next->num=l;
            }
            e=e->next;
        }
        e=start;
    }
    }
}

/*void ssort(){
    
    int i,d,e;
    if(start==NULL){
        printf("\nEmpty Linked List\n");
    }
    else{
        
        count = 0;
        j=start;
        while (j != NULL) {
            count++;
            j = j->next;
        }
        
        j = start;
           k = start->next;
        for(i=0;i<count;i++){
            for(d=0;d<count;d++){
                if(j->num>k->num){
                    e=j->num;
                    j->num=k->num;
                    k->num=e;
                }
                k=k->next;
            }
            j=j->next;
           k=j->next;
        }
    }
    
}*/

void isort(){
      
}
void lsearch() {
    int pos=0,sea;
    if (start==NULL) {
        printf("\nLinked list is empty\n");
    }
    else
    {
        printf("\nEnter the element\n");
        scanf("%d",&sea);

        while (start->next!=NULL) {
            pos++;
            if(start->num==sea) {
                printf("\n%d is found at %d position\n Its address is %u\n",sea,pos,start);
                break;
            }
            start=start->next;
        }
        if (start->next==NULL) {
            printf("\n%d not found in linked list\n",sea);
        }
    }
    start=front;
}
//------------------------------------------------------------------------------------------------
void bisearch(){
}