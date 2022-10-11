#include<stdio.h>
#define SIZE 10

int queue[SIZE];
int front = -1;
int rear = -1;

void enque(int val){
	if(front == (rear +1)%SIZE)printf("\nQueue is full");
	else{
		if(front == -1){
			front = 0;
			rear = 0;
			queue[rear]= val;
		}
		else{
			rear =(rear + 1)%SIZE;
			queue[rear]=val;
		}
	}
}

int deque(){
	int val;
	if(front == -1)printf("queue is empty");
	else{
		if(front == rear){
			val = queue[front];
			front = rear -1;
		}
		else{
			val = queue[front];
			front = (front +1)%SIZE;
		}
	}
	return val;
}

void display(){
	int i;
	if(front == -1)printf("queue is empty");
	else{
		for(i= front;i<=rear;i++){
			printf("%d\t",queue[i]);
		}
		if(front>rear){
			for(i=front;i<=SIZE-1;i++){
				printf("%d\t",queue[i]);
			}
			for(i = 0; i<=rear;i++){
				printf("%d\t",queue[i]);
			}
		}
	}
}

void main(){
	int val;
	int n;
	printf("\nEnter the number corresponding the operation to perform it:\n1.enque\n2.deque\n3.display\n4.exit");
	do{
		printf("\nenter the number: ");\
		scanf("%d",&n);
		switch(n){
			case 1:printf("Enter the number to add to the queue\n");
					scanf("%d", &val);
					enque(val);
					break;
			
			case 2:deque();break;
			case 3:display();break;
			case 4:exit(0);break;
			default:printf("\nInvild input");
		}
		
	}while(1);
}
