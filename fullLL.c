#include <stdio.h>
#include<conio.h>
#include<stdlib.h> 
//Nodes and functions for simple linked list
struct node {
    int num;
   struct node *next;
}*start=NULL;
struct node *temp;
struct node *front=NULL;
struct node *rear;
struct node *q;
struct node *prev;
struct node *del;
struct node *d;
struct node *ran;
void insertion(); 
//void deletion();
void display();
void search();
void dele();
int count=0; 
//functions and variables for circular deletion
struct cnode {
    int num;
   struct cnode *next;
}*cstart=NULL;
struct cnode *clast;
struct cnode *cfront=NULL;
struct cnode *cran;
struct cnode *ctemp;
struct cnode *cdel;
void cdeletion();
void cinsertion();
void cdisplay();
void csearch();
void cdele();
int ccount=0; 
//Application-------------
struct gnode
{ // int id;
    char name[20];
    int salary;
    struct gnode *next;
} ;
struct gnode *gtemp = NULL;
struct gnode *gpretemp = NULL;
struct gnode *gstart = NULL;
struct gnode *gnewnode;
void insert();
void adisplay(); 
//functions and nodes for Doubly linked list //------------------------------------------------------------------------------------------------------------------------------

struct dnode {
    struct dnode *prev;
    int num;
    struct dnode *next;
}*dstart=NULL;
struct dnode *dfront=NULL;
struct dnode *dlast=NULL;
int dcount=0;
void dinsertion();
void ddeletion();
void ddisplay();
void ddele();
void dsearch(); 
//functions and nodes for Circular Doubly linked list //------------------------------------------------------------------------------------------------------------------------------
struct cdnode {
    struct cdnode *prev;
    int num; 
       struct cdnode *next;
}*cdstart=NULL;
struct cdnode *cdfront=NULL;
struct cdnode *cdlast=NULL;
int cdcount=0;
void cdinsertion();
void cddeletion();
void cddisplay();
void cddele();
void cdsearch(); 
//----------------------------------------------------------------------------------------------------------------------------------------------- //functions and nodes for the polynomial applications

struct anode{
int coef;
int pow;
struct anode *next;
}*A=NULL;
struct anode *B=NULL;
struct anode *C=NULL;
struct anode *L1=NULL;
struct anode *L2=NULL;
void ainsert();
void show();
int main() {
    int i,j,k,l,m,n;
    system("cls");
    do {
	printf("\n\n\n\n\t\tLinked List Program\n\t\t-->�Pratham 722008\n\n\n");
	printf("\n1.Simple linked list\n2.Circular Linked List\n3.Doubly Linked list\n4.Circular doubly linked list\n5.Application\n6.Exit\n");
	scanf("%d",&i);
	fflush(stdin);
	switch(i) { //Simple Linked List
	case 1:
	    do {
		printf("\nEnter choice(1-5)\n");
		printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Search\n5.Exit\n");
		scanf("%d",&j);
		switch(j) {
		case 1:
		    insertion();
		    break;
		case 2:
		    dele();
		    break;
		case 3:
		    display();
		    break;
		case 4:
		    search();
		    break;
		case 5: //	    exit(0);
		    break;
		default:
		    printf("\nWrong entry\n");

		}
	    } while(j!=5);
	    break;
	case 2: //Circular linked list
	    do {
		printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Search\n5.Exit\n");
		scanf("%d",&k);
		switch(k) {
		case 1:
		    cinsertion();
	    break;
		case 2:
		    cdeletion();
		    break;
		case 3:
		    cdisplay();
		    break;
		case 4:
		    csearch();
		    break;
		case 5: // exit(0);
		   break;
		default:
		    printf("\nWrong entry\n");
		}
	    } while(k!=5);
	    break;
	case 3: //Doubly linked list
	    do {
		printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Search\n5.Exit\n");
		scanf("%d",&l);
		switch(l) {
		case 1:
		    dinsertion();
		    break;
		case 2:
		    ddeletion();
		    break;
		case 3:
		    ddisplay();
		    break;
		case 4:
		    dsearch();

		    break;

		case 5: // exit(0);
		    break;
		default:
		    printf("\nWrong entry\n");
		}
	    } while(l!=5);

	    break;

	case 4: //Circular Doubly linked list
	    do {
		printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Search\n5.Exit\n");
		scanf("%d",&m);
		switch(m) {
		case 1:
		    cdinsertion();
		    break;
		case 2:
		    cddeletion();
		    break;
		case 3:
		    cddisplay();
		    break;
		case 4:
				    cdsearch();
		    break;
		case 5: //   exit(0);
		 break;
		default:
		    printf("\nWrong entry\n");
		}
	    } while(m!=5);
	    break;
	    	case 5: //Applications of linked list
	    printf("\n1.Application 1\n2.Addition of polynomial\n");
	    scanf("%d",&n);
	    switch(n){
	    case 1:
	    for(i=0; i<6; i++) {
		insert();
	    }
	    adisplay();
	    getch();
	    break;
	    case 2: // For polynomial
	ainsert();
	show();
		break;
	    default:
		printf("\nWrong choice\n");
		}
	    break;
	case 6:
	    exit(0);
	default:
	    printf("\nEnter right choice\n");
	}
    } while(i!=5);
return 0;
}
 //---------------------------------------------------------------------------------------------------------------------

void insertion () {
    struct node *f;
    int z,k,i;
    ran=start;
    printf("\n1.Insertion at the end\n2.Insertion at the start\n3.Insertion at a specific place\n");
    scanf("%d",&z);
    switch(z) {
    case 1: //Insertion from end
	if(start==NULL) { //For first element
	    f=(struct node*)malloc(sizeof(struct node));
	    printf ("\nFirst element\n");
	    printf("\nEnter the value\n");
	    scanf("%d",&f->num);
	    start=f;
	    q=start;
	    front=start;
	    count++;
	}
	else {
	    f=(struct node*)malloc(sizeof(struct node));
	    printf("\nEnter the value\n");
	    scanf("%d",&f->num);
	    f->next=NULL;
	    q->next=f;
	    q=f;
	    count++;
	}
	break;
    case 2: //Insertion from start
	if(start==NULL) { //FOR FIRST ELEMENT
	    f=(struct node*)malloc(sizeof(struct node));
	      printf ("\nFirst element\n");
	    printf("\nEnter the value\n");
	    scanf("%d",&f->num);
	    start=f;
	    q=start;
	    front=start;
	    count++;
	}
	else {
	    f=(struct node*)malloc(sizeof(struct node));
	    printf("\nEnter the value\n");
	    scanf("%d",&f->num);
	    f->next=start;
	    start=f;
	    front=start;
	    count++;
	}
	break;
    case 3: //Insertion in between
	printf("\nEnter at which position you want to insert\n");
	scanf("%d",&k);
	if(k==1) {
			    if(start==NULL) {
		f=(struct node*)malloc(sizeof(struct node));
		printf ("\nFirst element\n");
		printf("\nEnter the value\n");
		scanf("%d",&f->num);
		start=f;
		q=start;
		front=start;
		count++;
	    }
	    else {
		f=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the value\n");
		scanf("%d",&f->num);
		f->next=start;
		start=f;
		front=start;
		count++;
	    }
	}
	else if(k>count+1) {
	    printf ("\nThere are not enough elements\n");

	}
	else if(k==count+1) {
	    f=(struct node*)malloc(sizeof(struct node));
	    printf("\nEnter the value\n");
	    scanf("%d",&f->num);
	    q->next=f;
	    q=f;
	    count++;
	}

	else {
	    f=(struct node*)malloc(sizeof(struct node));
	    printf("\nEnter the value\n");
	    scanf("%d",&f->num);
	    	    for(i=1; i<k; i++) {
		ran=ran->next;
	    }
	    f->next=ran->next;
	    ran->next=f;
	    start=front;
	    count++;
	}
	break;
    default:
	printf("\nInvalid choice\nNow enter again\n");
    }
} //--------------------------------------------------------------------------------------------------------------------------- 
/*void deletion() {
    int z,n,o,k;
 del=start;
    start=front;
        if(start==NULL){
      printf ("\nLinked list in empty");
    }
    else{
    printf("\n1.Deletion at the end\n2.Deletion at the start\n3.Deletion at a specific place\n4.Deletion of a specific element\n");
    scanf("%d",&z);
    switch(z) {
    case 1: //Deletion from end
    n=q->num;
    while(start->next!=q){
      start = start->next;
    }
    start->next = q->next;
    printf("\nThe deleted element is %d\n",n);
    free(q);

    q=start;
    start=front;
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
           front=start;
     if(count==1){
      start=NULL;
    }
count--;
    break;

    case 3: //Deletion in between
      printf("\nEnter which element you want to delete\n");
      scanf("%d",&k);
      if(k==1){

    temp=start->next;
     n=start->num;
     printf("The deleted element is %d",n);
     free(start);
    start=temp;
      front=start;
     if(count==1){
      start=NULL;
    }
 count--;
      }
      else if(k==count){
    n=q->num;
    while(start->next!=q){
      start = start->next;
    }

    start->next = q->next;
    printf("\nThe deleted element is %d\n",n);
       free(q);

    q=start;
    start=front;
      if(count==1){
      start=NULL;
    }
    count--;
      }
      else if(k>count){
    printf("\nThere is not any elements at %d position\n",k);
      }
      else{
    for(o=1;o<k;o++){
     del=del->next;
    }
    d=del->next;
    n=d->num;
       printf("\nThe deleted element is %d\n",n);
      del->next=d->next;
 free(d);
    count--;
    }
        break;
   case 4:
    dele();
    break;
  default:
    printf("\nInvalid choice\nNow enter again\n");
    }

    }

}*/ 
//----------------------------------------------------------------------------------------

void display() {
    start=front;
    if(start==NULL)
    {
	printf("\nEmpty Linked List\n");
    }
    else {
	printf ("\nThe elements of Linked list are\n\n");
	for(front;front!=NULL;front=front->next) {
	    printf("\t%d\t",front->num); // start=start->next;
	}
	printf("\n");
	front=start;
    }
}
 //----------------------------------------------------------------------------------

void search() {
    int pos=0,sea;
    if (start==NULL) {
	printf("\nLinked list is empty\n");
    }
    else {
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

void dele() {
    struct node *v,*x;
    int w;
    if (start==NULL) {
	printf("\nLinked list is empty\n");
    }
       else {
	printf("\nEnter element to be deleted:\n");
	scanf("%d",&w);
	if (start->num==w) { //for first element
	    v=start;
	    start=start->next;
	    free(v);
	    if(count==1)
		start=NULL;
	    count--;
	    front=start;
	}
	else if(q->num==w) {
	    while(start->next!=q) {
		start = start->next;
	    }
	    start->next = q->next;
	    printf("\nThe deleted element is %d\n",q->num);
	    free(q);
	    q=start;
	    start=front;
	    if(count==1) {
		start=NULL;
	    }
	    count--;

	}
	else {
	    x=start;
	    while (x->next->next!=NULL) { //for second element
		if(x->next->num==w)
		{
		    v=x->next;
		    x->next=v->next;
		    free(v);
		    v=NULL;
		    count--;
		    break;
		}
		x=x->next;
	    }
	    if (v!=NULL) {
		printf("\n%d element not found in the link list\n",w);
	    }
	    front=start;
	}
    }
} 
//_----------------------------------------------- //functions for circular linked list

void cinsertion () {
    struct cnode *f;
    int z,k,i;
    cran=cstart;
   printf("\n1.Insertion at the end\n2.Insertion at the start\n3.Insertion at a specific place\n");
    scanf("%d",&z);
    switch(z) {
    case 1: //Insertion from end
	if(cstart==NULL) { //For first element
	    f=(struct cnode*)malloc(sizeof(struct cnode));
	    printf ("\nFirst element\n");
	    printf("\nEnter the value\n");
	    scanf("%d",&f->num);
	    cstart=f;
	    clast=cstart;
	    	    cfront=cstart;
					clast->next=cstart;
	    ccount++;
	}
	else {
	    f=(struct cnode*)malloc(sizeof(struct cnode));
	    printf("\nEnter the value\n");
	    scanf("%d",&f->num);
	    f->next=NULL;
	    clast->next=f;
	    clast=f;
	    clast->next=cstart;
	    ccount++;
	}
	break;
    case 2: //Insertion from start
	if(cstart==NULL) { //FOR FIRST ELEMENT
	    f=(struct cnode*)malloc(sizeof(struct cnode));
	    printf ("\nFirst element\n");
	    printf("\nEnter the value\n");
	    scanf("%d",&f->num);
	    cstart=f;
	    clast=cstart;
	    cfront=cstart;
	    clast->next=cstart;
	    ccount++;
	}
	else {
	    f=(struct cnode*)malloc(sizeof(struct cnode));
	    printf("\nEnter the value\n");
	    scanf("%d",&f->num);
	    f->next=cstart;
	    cstart=f;
	    cfront=cstart;
	    clast->next=cstart;
	    ccount++;
	}
	break;
    case 3: //Insertion in between
	printf("\nEnter at which position you want to insert\n");
	scanf("%d",&k);
	if(k==1) {
	    if(cstart==NULL) {
		f=(struct cnode*)malloc(sizeof(struct cnode));
		printf ("\nFirst element\n");
		printf("\nEnter the value\n");
		scanf("%d",&f->num);
		cstart=f;
		clast=cstart;
		cfront=cstart;
		clast->next=cstart;
		ccount++;
	    }
	    else {
		f=(struct cnode*)malloc(sizeof(struct cnode));
		printf("\nEnter the value\n");
		scanf("%d",&f->num);
		f->next=cstart;
		cstart=f;
		cfront=cstart;
	clast->next=cstart;
		ccount++;
	    }
	}
	else if(k>ccount+1) {
	    printf ("\nThere are not enough elements\n");
	}
	else if(k==ccount+1) {
	    f=(struct cnode*)malloc(sizeof(struct cnode));
	    printf("\nEnter the value\n");
	    scanf("%d",&f->num);
	    clast->next=f;
	    clast=f;
	    clast->next=cstart;
	    ccount++;
	}
	else {
	    f=(struct cnode*)malloc(sizeof(struct cnode));
	    printf("\nEnter the value\n");
	    scanf("%d",&f->num);
	    for(i=1; i<k; i++) {
		cran=cran->next;
	    }
	    f->next=cran->next;
	    cran->next=f;
	    cstart=cfront;
	    ccount++;
	}
	break;
    default:
	printf("\nInvalid choice\nNow enter again\n");
    }
}
 //---------------------------------------------------------------------------------------------------------------------------


void cdeletion() {
struct cnode *d;
    int z,n,o,k;
    cdel=cstart;
    cstart=cfront;
    if(cstart==NULL) {
	printf ("\nLinked list in empty");
    }
   else {
	printf("\n1.Deletion at the end\n2.Deletion at the start\n3.Deletion at a specific place\n4.Deletion of a specific element\n");
	scanf("%d",&z);
	switch(z) {
	case 1: //Deletion from end
	    n=clast->num;
	    while(cstart->next!=clast) {
		cstart = cstart->next;
	    }
	    cstart->next = clast->next;
	    printf("\nThe deleted element is %d\n",n);
	    free(clast);
	    clast=cstart;
	    clast->next=cfront;
	    cstart=cfront;
	    if(ccount==1) {
		cstart=NULL;
	    }
	    ccount--;
	    break;
	case 2: //Deletion from start
	    ctemp=cstart->next;
	    n=cstart->num;
	    printf("The deleted element is %d",n);
	    free(cstart);
	    cstart=ctemp;
	    cfront=cstart;
	    clast->next=cstart;
	    if(ccount==1) {
		cstart=NULL;
	    }

	    ccount--;
	    break;
	case 3: //Deletion in between
	    printf("\nEnter which element you want to delete\n");
	    scanf("%d",&k);
	    if(k==1) {
		ctemp=cstart->next;
		n=cstart->num;
		printf("The deleted element is %d",n);
		free(cstart);
		cstart=ctemp;
		cfront=cstart;
		if(ccount==1) {
		    cstart=NULL;
		}
		clast->next=cstart;
		ccount--;
	    }
	    else if(k==ccount) {
		n=clast->num;
		while(cstart->next!=clast) {		    cstart = cstart->next;
		}
		cstart->next = clast->next;
		printf("\nThe deleted element is %d\n",n);
		free(clast);
		clast=cstart;
		cstart=cfront;
		clast->next=cstart;
		if(ccount==1) {
		    cstart=NULL;
		}
		ccount--;
	    }
	    else if(k>ccount) {
		printf("\nThere is not any elements at %d position\n",k);
	    }

	    else {
		for(o=1; o<k; o++) {
		    cdel=cdel->next;

		}
		d= cdel->next;
		n=d->num;
		printf("\nThe deleted element is %d\n",n);

		cdel->next=d->next;
		free(d);
		ccount--;
	    }
	    break;
	case 4:
	    cdele();
	    break;
	default:
	    printf("\nInvalid choice\nNow enter again\n");
	}
    }
}
 //----------------------------------------------------------------------------------------
void cdisplay() {
    cstart=cfront;
    if(cstart==NULL)
    {
	printf("\nEmpty Linked List\n");
    }
    else {
	printf ("\nThe elements of Linked list are\n\n");
	for(cstart; cstart!=NULL; cstart=cstart->next) {
	    printf("\t%d\t",cstart->num);

	    if(cstart->next==cfront)

		break;
	}
	printf("\n");

	cstart=cfront;
    }
}
 //----------------------------------------------------------------------------------


void csearch() {
    int pos=0,sea;
    if (cstart==NULL) {

	printf("\nLinked list is empty\n");
    }

    else {
	printf("\nEnter the element\n");
	scanf("%d",&sea);

	while (cstart->next!=cfront) {
	    pos++;
	    if(cstart->num==sea) {
		printf("\n%d is found at %d position\n Its address is %u\n",sea,pos,cstart);
		break;
	    }

	    cstart=cstart->next;
	}
	if (cstart->next==cfront) {
	    printf("\n%d not found in linked list\n",sea);
	}
    }
    cstart=cfront;

}
 //------------------------------------------------------------------------------------------------

void cdele() {
    struct cnode *v,*x;
    int w;
    if (cstart==NULL) {
	printf("\nLinked list is empty\n");
   }
   else {
	printf("\nEnter element to be deleted:\n");

	scanf("%d",&w);
	if (cstart->num==w) { //for first element
	    v=cstart;
	    cstart=cstart->next;
	    free(v);

	    if(ccount==1)
		cstart=NULL;
		
	    ccount--;
	    cfront=cstart;
	    clast->next=cstart;

	}
	else if(clast->num==w) {
	    while(cstart->next!=clast) {
		cstart = cstart->next;
	    }
	    cstart->next = clast->next;
	    printf("\nThe deleted element is %d\n",q->num);
	    free(clast);
	    clast=cstart;
	    cstart=cfront;
	    if(ccount==1) {
		cstart=NULL;
	    }
	    clast->next=cstart;
	    ccount--;
	}

	else {
	    x=cstart;
	    while (x->next->next!=cfront) { //for second element
		if(x->next->num==w)
		{
		    v=x->next;
		    x->next=v->next;
		    free(v);
		    v=NULL;
		    ccount--;
		    break;
		}
		x=x->next;
	    }
	    if (v!=NULL) {
		printf("\n%d element not found in the link list\n",w);

	    }
	    cfront=cstart;
	}
    }

}

void insert()
{
 gnewnode = (struct gnode *)malloc(sizeof(struct gnode));

    printf("Enter the name:");
    scanf("%s", &gnewnode->name);
   printf("Enter the salary:");
    scanf("%d", &gnewnode->salary);
    gnewnode->next = NULL;

    if (gstart == NULL)    {
	gstart = gnewnode;
    }
    else {
	gtemp = gstart;
	while (gtemp != NULL)
	{
	    if (gtemp->salary > gnewnode->salary)
	    {
		if (gtemp == gstart)

		{ // found at first position

		    gnewnode->next = gstart;
		    gstart = gnewnode;
		    break;
		}
		else {
		    gnewnode->next = gtemp;
		    gpretemp->next = gnewnode;
		    break;
		} // found in betweeen
	    }
	    if (gtemp->next == NULL)
	    {
		gtemp->next = gnewnode;
		break;
	    }
	    gpretemp = gtemp;
	    gtemp = gtemp->next;
	}

    }

}
void adisplay()
{
    gtemp = gstart;
    if (gstart == NULL)
{
   
	printf("No Info\n");
    }

    else {
	while (gtemp != NULL)	{
	    printf("Name:%s\t",gtemp->name);
	    printf("Salary:%d\n",gtemp->salary);
	    gtemp = gtemp->next;
	}
    }
} 
//---------------------------------------------------_--------_------------------
void dinsertion() {
    int j,k,i;
    struct dnode *g;
    g=(struct dnode*)malloc(sizeof(struct dnode));
    printf("\nEnter the number ");
    scanf("%d",&g->num);
    printf("\n1.Insert at the end\n2.Insert from the start\n3.Insert in between\n");

    scanf("%d",&j);
    switch(j) {
    case 1:
	if(dstart==NULL) {
	    dstart=g;
	    dlast=g;
	    dfront=dstart;

	}
	else {
	    dlast->next=g;
	    g->prev=dlast;
	    dlast=g;
	}

	dcount++;
	break;
    case 2:
	if(dstart==NULL) {
	    dstart=g;
	    dlast=g;
	    dfront=dstart;
	}
	else {
	    dstart->prev=g;
	    g->next=dstart;
	    dstart=g;
	    dfront=dstart;
	}
	dcount++;
	break;
    case 3:
	printf("\nAt which position you want to enter\n");
	scanf("%d",&k);
	if(k==1) {
	    if(dstart==NULL) {
		dstart=g;
		dlast=g;
		dfront=dstart;
		dcount++;
	    }
	    else {
		dstart->prev=g;
		g->next=dstart;
		dstart=g;
		dfront=dstart;

		dcount++;
	    }
	}
	else if(k>1 && k<dcount) {

	    for(i=1; i<k; i++) {

		dfront=dfront->next;
	    }
	    dfront->next->prev=g;
	    g->next=dfront->next;
	    dfront->next=g;
	    g->prev=dfront;
	    dfront=dstart;
	    dcount++;

	}
	else if(k>=dcount) {
	    dlast->next=g;
	    g->prev=dlast;
	    dlast=g;
	    if(dstart==NULL) {
		dstart=dlast;
	    }
	    dcount++;
	}
	else 
	printf ("\nInvalid Choice\n");
	break;
    default:
	printf("Invalid choice\n");
    }
}
void ddeletion () {
    int j,k,o;
    struct dnode *temp,*del,*d;
    if (dstart==NULL) {
	printf("\nLinked list is empty\n");
    }
    else {
	printf("\n1.Deletion from end\n2.Deletion from start\n3.Deletion at specific location\n4.Deletion of specific element\n");
	scanf("%d",&j);
	switch(j) {
	    	case 1:
	    temp=dlast;
	    printf("\nThe deleted element is %d",dlast->num);
	    dlast=dlast->prev;
	    dlast->next=NULL;
	    free(temp);
	    if(dcount==1) {
		dstart=NULL;
	    }
	    dcount--;
	    break;
	case 2: // temp=dstart->next;
	    printf("The deleted element is %d",dfront->num);
	    dfront=dfront->next;
	    dfront->prev=NULL;
	    free(dstart);
	    dstart=dfront;
	    dstart->prev=NULL;
	    dfront=dstart;
	    if(dcount==1) {
		dstart=NULL;

	    }
	    dcount--;
	    break;
	case 3:
	    printf("\nEnter which element you want to delete\n");
	    scanf("%d",&k);

	    if(k==1) {
		printf("The deleted element is %d",dfront->num);
		dfront=dfront->next;
		dfront->prev=NULL;

		free(dstart);
		dstart=dfront;
		dstart->prev=NULL;
		dfront=dstart;
		if(dcount==1) {
		    dstart=NULL;

		}
		dcount--;
	    }
	    else if(k==dcount) {
		temp=dlast;
		printf("\nThe deleted element is %d",dlast->num);
		dlast=dlast->prev;
		dlast->next=NULL;
		free(temp);
		if(dcount==1) {
		    dstart=NULL;
		}
		dcount--;
		break;
	    }
	    else if(k>dcount) {
		printf("\nThere is not any elements at %d position\n",k);
	    }
    else {
		for(o=1; o<k; o++) {
		    del=del->next;
		}
		d=del->next;
		printf("\nThe deleted element is %d\n",d->num);
		del->next=d->next;
		d->next->prev=del;

		free(d);
		if(dcount==1) {
		    dstart=NULL;
		}
		dcount--;
	    }
	    break;
	case 4:
	    ddele();
	    break;
	default:
	    printf("\nInvalid choice\n");
	}
    }
}
void ddele() {
    struct dnode *v,*x,*temp;
    int w;
    dstart=dfront;
    if (dstart==NULL) {
	printf("\nLinked list is empty\n");
    }
    else {
	printf("\nEnter element to be deleted:\n");
	scanf("%d",&w);
	if (dstart->num==w) { //for first element
	    v=dstart;
	    dstart=dstart->next;
	    printf("\nElement deleted\n");
	    free(v);
	    if(dcount==1)
		dstart=NULL;
	    dcount--;
	    dfront=dstart;
	}
	else if(dlast->num==w) {
	    temp=dlast;
	    printf("\nThe deleted element is %d",dlast->num);
	    dlast=dlast->prev;
	    dlast->next=NULL;
	    free(temp);
	    if(dcount==1) {
		dstart=NULL;
	    }
	    dcount--;
	}
	else {
	    x=dstart;
	    while (x->next->next!=NULL) { //for second element
		if(x->next->num==w)
		{
		    v=x->next;
		    x->next=v->next;
		    v->next->prev=x;

		    free(v);
		    v=NULL;
		    if(dcount==1) {
			dstart=NULL;
		    }
		    dcount--;
		    break;
		}
		x=x->next;
	    }
	    if (v!=NULL) {
		printf("\n%d element not found in the link list\n",w);
	    }
	    dfront=dstart;

	}

    }
}

void ddisplay() {
    dstart=dfront;
    if(dstart==NULL)
    {
	printf("\nEmpty Linked List\n");
    }
    else {
	printf ("\nThe elements of Linked list are\n\n");
	for(dstart; dstart!=NULL; dstart=dstart->next) {
	    printf("\t%d\t",dstart->num); // start=start->next;
	}
	printf("\n");
	dstart=dfront;
    }

}
void dsearch() {
    int g,d=1;
    dstart=dfront;
    if(dstart==NULL) {
	printf("\nThe linked list is empty\n");
    }
    else {
	printf("\nEnter the number to be found\n");
	scanf("%d",&g);
	while(dfront!=NULL) {
	    if(dfront->num==g) {
		printf("\nThe element is found at %d position in linked list\n",d);
		printf("Its address is %u\n",dfront);
		break;
	    }
	    d++;
	    dfront=dfront->next;
	}
	if(dfront==NULL) {
	    printf("\nElement not found in LL\n");
	}
    }
    dfront=dstart;
}
//------------------------------------------------------------------------------------------------------------- //functions for doubly circular ll
void cdinsertion() {
    int j,k,i;
    struct cdnode *g;
    g=(struct cdnode*)malloc(sizeof(struct cdnode));
    printf("\nEnter the number ");
    scanf("%d",&g->num);
    printf("\n1.Insert at the end\n2.Insert from the start\n3.Insert in between\n");
    scanf("%d",&j);
   switch(j) {
    case 1:
	if(cdstart==NULL) {
	    cdstart=g;
	    cdlast=g;
	    cdlast->next=cdstart;
	    cdstart->prev=cdlast;
	    cdfront=cdstart;
	}
	else {
	    cdlast->next=g;
	    g->prev=cdlast;
	    g->next=cdstart;
	    cdlast=g;
	    cdstart->prev=cdlast;
	}
	cdcount++;
	break;
    case 2:
	if(cdstart==NULL) {
	    cdstart=g;
	    cdlast=g;
	    cdfront=cdstart;
	    cdlast->next=cdstart;
	    cdstart->prev=cdlast;
	}
	else {
	    cdstart->prev=g;
	    g->next=cdstart;
	    cdstart=g;
	    cdlast->next=cdstart;
	    cdstart->prev=cdlast;
	    cdfront=cdstart;
	}
	cdcount++;
	break;
    case 3:
	printf("\nAt which position you want to enter\n");
	scanf("%d",&k);
	if(k==1) {
	    if(cdstart==NULL) {
		cdstart=g;
		cdlast=g;
		cdstart->prev=cdlast;
		cdlast->next=cdstart;
		cdfront=cdstart;
		cdcount++;
	    }
	    else {
		cdstart->prev=g;
		g->next=cdstart;
		cdstart=g;
	    cdstart->prev=cdlast;
	    cdlast->next=cdstart;
		cdfront=cdstart;
		cdcount++;
	    }
	}
	else if(k>1 && k<cdcount) {
	    for(i=1; i<k; i++) {
		cdfront=cdfront->next;
	    }
	    cdfront->next->prev=g;
	    g->next=cdfront->next;
	    cdfront->next=g;
	    g->prev=cdfront;
	    cdfront=cdstart;
	    cdcount++;
	}
	else if(k>=cdcount) {
	    cdlast->next=g;
	    g->prev=cdlast;
	    cdlast=g;
	    cdlast->next=cdstart;
	    cdstart->prev=cdlast;
	    if(cdstart==NULL) {
		cdstart=cdlast;
		cdstart->next=cdstart;
		cdstart->prev=cdlast;
		cdfront=cdstart;
	    }
	    cdcount++;
	}
	else 
	printf ("\nInvalid Choice\n");

	break;
    default:
	printf("Invalid choice\n");
    }
}

void cddeletion () {
    int j,k,o;
    struct cdnode *temp,*del,*d;
    if (cdstart==NULL) {
	printf("\nLinked list is empty\n");
    }
    else {
	printf("\n1.Deletion from end\n2.Deletion from start\n3.Deletion at specific location\n4.Deletion of specific element\n");
	scanf("%d",&j);
	switch(j) {
	case 1:
	    temp=cdlast;
	    printf("\nThe deleted element is %d",cdlast->num);
	    cdlast=cdlast->prev;
	    cdlast->next=cdstart;
	    cdstart->prev=cdlast;
	    free(temp);
	    if(cdcount==1) {
		cdstart=NULL;
	    }
	    cdcount--;
	    break;
	case 2: // temp=dstart->next;
	    printf("The deleted element is %d",cdfront->num);
	    cdfront=cdfront->next;
	    cdfront->prev=cdlast;
	    free(cdstart);
	    cdstart=cdfront;
	    cdstart->prev=cdlast;
	    cdlast->next=cdstart;
	    cdfront=cdstart;
	    if(cdcount==1) {
		cdstart=NULL;
	    }
	    cdcount--;
	    break;
	    	case 3:
	    printf("\nEnter which element you want to delete\n");
	    scanf("%d",&k);
	    if(k==1) {
		printf("The deleted element is %d",cdfront->num);
		cdfront=cdfront->next;
		cdfront->prev=NULL;
		free(cdstart);
		cdstart=cdfront;
		cdstart->prev=cdlast;
		cdlast->next=cdstart;
		cdfront=cdstart;
		if(cdcount==1) {
		    cdstart=NULL;
		}
		cdcount--;
	    }
	    else if(k==cdcount) {
		temp=cdlast;
		printf("\nThe deleted element is %d",cdlast->num);
		cdlast=cdlast->prev;
		cdlast->next=cdstart;
		cdstart->prev=cdlast;
		free(temp);
		if(cdcount==1) {
		    cdstart=NULL;
		}
		cdcount--;
		break;
	    }
	    else if(k>cdcount) {
		printf("\nThere is not any elements at %d position\n",k);
	    }
	    else {
		for(o=1; o<k; o++) {
		    del=del->next;
		}
		d=del->next;
		printf("\nThe deleted element is %d\n",d->num);
		del->next=d->next;
		d->next->prev=del;
		free(d);
		if(cdcount==1) {
		    cdstart=NULL;
		}
		cdcount--;
	    }
	    break;
	case 4:
	    cddele();
	    break;
	default:
	    printf("\nInvalid choice\n");
	}
    }

}
void cddele() {
    struct cdnode *v,*x,*temp;
    int w;
    cdstart=cdfront;
    if (cdstart==NULL) {
	printf("\nLinked list is empty\n");
    }
    else {
	printf("\nEnter element to be deleted:\n");
	scanf("%d",&w);
	if (cdstart->num==w) { //for first element
	    v=cdstart;
	    cdstart=cdstart->next;
	    cdstart->prev=cdlast;
	    cdlast->next=cdstart;
	    printf("\nElement deleted\n");
	    free(v);
	    if(cdcount==1)
		cdstart=NULL;
	    cdcount--;
	    cdfront=cdstart;
	}
	else if(cdlast->num==w) {
	    temp=cdlast;
	    printf("\nThe deleted element is %d",cdlast->num);
	    cdlast=cdlast->prev;
	    cdlast->next=cdstart;
	    cdstart->prev=cdlast;
	    free(temp);
	    if(cdcount==1) {
		cdstart=NULL;
	    }
	    cdcount--;
	}
	else {
	    x=cdstart;
	    while (x->next->next!=NULL) { //for second element
		if(x->next->num==w)
		{
		    v=x->next;
		    x->next=v->next;
		    v->next->prev=x;
		    free(v);
		    v=NULL;
		    if(cdcount==1) {
			cdstart=NULL;
		    }
		    cdcount--;
		    break;
		}
		x=x->next;
	    }
	    if (v!=NULL) {
		printf("\n%d element not found in the link list\n",w);
	    }

	    cdfront=cdstart;
	}
    }
}

void cddisplay() {
    cdstart=cdfront;
    if(cdstart==NULL)
    {
	printf("\nEmpty Linked List\n");
    }
    else {
	printf ("\nThe elements of Linked list are\n\n");
	for(cdstart; cdstart!=NULL; cdstart=cdstart->next) {
	    printf("\t%d\t",cdstart->num);
	    if(cdstart==cdlast)
	    break; 
	    // start=start->next;

	}
	printf("\t%d\t",cdstart->num);
	printf("\n");
	cdstart=cdfront;
    }
}
void cdsearch() {
    int g,d=1,a=0;
    cdstart=cdfront;
    if(cdstart==NULL) {
	printf("\nThe linked list is empty\n");
    }
    else {
	printf("\nEnter the number to be found\n");
	scanf("%d",&g);
	while(cdfront!=NULL) {
	    if(cdfront->num==g) {
		printf("\nThe element is found at %d position in linked list\n",d);
		printf("Its address is %u\n",cdfront);
		  a=1;
		break;
	    }

	    if(cdfront->next==cdstart)
	    break;
	    d++;
	    cdfront=cdfront->next;
	}
	if(a==0) {
	    printf("\nElement not found in LL\n");
	}
    }
  cdfront=cdstart;
} 
//-------------------------------------+-
void ainsert(){
    char a,b;
    struct anode *p,*q;
    struct anode *d,*e;
     printf("\nEnter the elements of first polynomial equation");
    do{
	p=(struct anode*)malloc(sizeof(struct anode));
	printf("\ncoeficient of variable\n");
	scanf("%d",&p->coef);
	printf("\nPower of variable\n");
	scanf("%d",&p->pow);
	if(A==NULL){
	    A=p;
	    L1=p;
	    L1->next=NULL;
	}
	else{
	    L1->next=p;
	    L1=p;
	    L1->next=NULL;
	}
	printf("\nDo you want to add more Y/N?");
     scanf(" %c",&a);
    }while(a=='y' || a=='Y'); // for 2nd polynomial equation
	    printf("\nEnter the elements of second polynomial equation");
     do{
	q=(struct anode*)malloc(sizeof(struct anode));
	printf("\ncoeficient of variable\n");
	scanf("%d",&q->coef);
	printf("\nPower of variable\n");
	scanf("%d",&q->pow);
	if(B==NULL){
	    B=q;
	    L2=q;
	    L2->next=NULL;
	}
	else{
	    L2->next=q;
	    L2=q;
	    L2->next=NULL;
	}
	printf("\nDo you want to add more Y/N?");
	scanf(" %c",&b);
    }while(b=='y' || b=='Y');
    d=A;
    e=B; //For printing the equations
    printf("\nThe first polynomial equation is=");
    while(d->next!=NULL){
      printf("\t%dx^%d\t+",d->coef,d->pow);
      d=d->next;
    }
   printf("\t%dx^%d\n",d->coef,d->pow);
     printf("\nThe second polynomial equation is=");
    while(e->next!=NULL){
      printf("\t%dx^%d\t+",e->coef,e->pow);
      e=e->next;
    }
    printf("\t%dx^%d\n",e->coef,e->pow);
}
void show(){
    struct anode *A1;
    struct anode *B1;
   struct anode *r,*C1;
    int d=1;
   A1=A;
    B1=B;
    while(A1 != NULL && B1!= NULL)
    {
        if(A1->pow > B1->pow)
        {
            r = (struct anode*) malloc(sizeof(struct anode));
            C1 = C;
            r->coef = A1->coef;
            r->pow = A1->pow;
            if(C== NULL)
            {
                 C = r;
            }
            else {
                while(C1->next != NULL)
              {
                    C1 = C1->next;
               }
                C1->next = r;
            }
            A1 = A1->next;
        }
        else if(A1->pow < B1->pow)
        {
   r = (struct anode*) malloc(sizeof(struct anode));
            C1 = C;
            r->coef = B1->coef;
            r->pow = B1->pow;
            if(C == NULL)
            {
                C = r;
            }
            else {
                while(C1->next != NULL)
                {
                    C1 = C1->next;
                }
                C1->next = r;
            }
            B1 = B1->next;
        }
        else {
            r = (struct anode*) malloc(sizeof(struct anode));
            C1 = C;
            r->coef = B1->coef+A1->coef;
            r->pow = B1->pow;
            if(C == NULL)
            {
                C = r;
            }
            else {
                while(C1->next != NULL)
                {
                    C1 = C1->next;
                }
                C1->next = r;
            }
            A1 = A1->next;
            B1 = B1->next;
        }
    }
    if(A1 == NULL)
    {
        while(B1 != NULL)
        {
          r = (struct anode*) malloc(sizeof(struct anode));
            C1 = C;
            r->coef = B1->coef;
            r->pow = B1->pow;
            if(C == NULL)
            {
                C = r;
            }
            else {
                while(C1->next != NULL)
                {
                    C1 = C1->next;
                }
                C1->next = r;
            }
          B1 = B1->next;
        }
    }
    if(B1 == NULL)
    {
        while(A1 != NULL)
        {
            r = (struct anode*) malloc(sizeof(struct anode));
          C1 = C;
            r->coef = A1->coef;
            r->pow = A1->pow;
            if(C == NULL)
            {
                C = r;
            }
            else {
                while(C1->next != NULL)
                {
                    C1 = C1->next;
                }
                C1->next = r;
            }
            A1 = A1->next;
        }
    }
    printf("\n The sum of polynomial equations is\n");
    while(C->next!=NULL){
	printf("\t%dx^%d\t+",C->coef,C->pow);
	C=C->next;
    }
       printf("\t%dx^%d\t",C->coef,C->pow);
       getch();
}