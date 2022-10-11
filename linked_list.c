#include<stdio.h>

typedef struct Node{
	int data;
	struct Node *next;
}Node;

Node *start= NULL;

void insert_front(int val){
	Node *n = (Node*)malloc(sizeof(Node));
	n->data = val;
	if(start == NULL){
		n->next = NULL;
		start = n;
	}
	else{
		n->next=start;
		start = n;
	}
}

void insert_end(int val){
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

int delete_end(){
	Node *t = start;
	Node *p;
	int val;
	if(start == NULL)printf("Linked list is empty");
	else if(start->next == NULL){
		val = start->data;
		start = NULL;
		free(t);
	}
	else{
		while(t->next != NULL){
			p = t;
			t= t->next;
		}
		val= t->data;
		p->next = NULL;
		free(t);
		
	}
	return val;
}

int delete_front(){
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
	printf("\nEnter the number corresponding the operation to perform it:\n1.add front\n2.add at end\n3.delete at front\n4.delete at end\n5.display\n6.exit");
	do{
		printf("\nenter the number: ");\
		scanf("%d",&n);
		switch(n){
			case 1:printf("Enter the number to add to the linked list\n");
					scanf("%d", &val);
					insert_front(val);
					break;
			case 2:printf("Enter the number to add to the linked list\n");
					scanf("%d", &val);
					insert_end(val);
					break;
			case 3:printf("deleted element is %d",delete_front());break;
			case 4:printf("deleted element is %d",delete_end());break;
			case 5:display();break;
			case 6:exit(0);break;
			default:printf("\nInvild input");
		}
		
	}while(1);
}
