#include<stdio.h>

typedef struct Node{
	int data;
	struct Node* next;
};

Node* start = NULL;

void insert_end(int key){
	Node* node = (Node*)malloc(sizeof(Node));
	Node* t;

	node->data = key;
	if(start == NULL){
		start = node;
	}
	else if(start->next == NULL){
		start->next=node;
	}
	else{
			t = start;
			while(t != NULL){
				t=t->next;
			}
			t->next=node;
	}
}
