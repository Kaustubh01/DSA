#include<stdio.h>

typedef struct Node{
	int data;
	struct Node* next;
}Node;

Node* start = NULL;

void insert_end(int key){
	Node* node = (Node*)malloc(sizeof(Node));
	Node* t;

	node->data = key;
	if(start == NULL){
		start = node;
	}

	else{
			t = start;
			while(t->next != NULL){
				t=t->next;
			}
			t->next=node;
	}
}

void display(){
	Node* t = start;
	printf("\nElements of linked list are:\n");
	while(t != NULL){
		printf("%d\t",t->data);
		t=t->next;
	}
}

void main(){
	int n,key;
	while(1){
		printf("\nEnter a number:");
		scanf("%d",&n);
		switch(n){
			case 1:
				printf("\nEnter a number to insert in the linked list");
				scanf("%d",&key);
				insert_end(key);
				break;
			case 2:display();break;
			case 3:exit(0);break;
		}
	}
}
