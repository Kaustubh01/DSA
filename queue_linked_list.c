#include<stdio.h>

typedef struct Node{
	int data;
	struct Node *next;
}Node;

Node *start= NULL;

void enque(int val){
	Node *n = (Node*)malloc(sizeof(Node));
	Node *t = start;
	n->data=val;
	n->next=NULL; 
	if(start == NULL){
		start = n;
	}
	else{
		while((t->next) != NULL ){
			t =t->next;
		}
		t->next = n;
	}
}

void display(){
	Node *t;
	t = start;
	if(t==NULL)
		printf("\nLinked list is empty");
	else{
		while(t != NULL){
			printf("%d\t",t->data);
			t=t->next;
		}
	}		
}

int deque(){
	Node *t = start;
	t=start;
	int val;
	if(t==NULL)
		printf("\nLinked list is empty");
	else{
		val = start->data;
		start=t->next;
		free(t);
	}
	return val;
}

void main(){
	int val;
	int n;
	printf("\nEnter the number corresponding the operation to perform it:\n1.enque\n2.deque\n3.display\n4.exit");
	do{
		printf("\nenter the number: ");\
		scanf("%d",&n);
		switch(n){
			case 1:printf("Enter the number to enque\n");
					scanf("%d", &val);
					enque(val);
					break;
			case 2:printf("dequed element is %d",deque());break;
			case 3:display();break;
			case 4:exit(0);break;
			default:printf("\nInvild input");
		}
		
	}while(1);
}
