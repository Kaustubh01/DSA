#include<stdio.h>

typedef struct Node{
	int data;
	struct Node *next;
}Node;
Node *start= NULL;

void push(int val){
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

int pop(){
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

int peek(){
	int val;
		if(start==NULL)
		printf("\nLinked list is empty");
	else{
		val = start->data;
		
	}
	return val;
}


void main(){
	int val;
	int n;
	printf("\nEnter the number corresponding the operation to perform it:\n1.push\n2.pop\n3.peek\n4.display\n5.exit");
	do{
		printf("\nenter the number: ");\
		scanf("%d",&n);
		switch(n){
			case 1:printf("Enter the number to add to the linked list\n");
					scanf("%d", &val);
					push(val);
					break;
			case 2:printf("poped element is %d",pop());break;
			case 3:printf("element at top is %d",peek());break;
			case 4:display();break;
			case 5:exit(0);break;
			default:printf("\nInvild input");
		}
		
	}while(1);
}

