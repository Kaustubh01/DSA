#include<stdio.h>
#define SIZE 10

int queue[SIZE];
int front = -1;
int rear =-1;

void insert(int val){
	if(rear == SIZE -1)printf("Queue is full\n");
	else if(front == -1){
		front = 0;
		rear = 0;
	}
	queue[rear] = val;
	rear++;
	printf("%d is pushed into the queue \n",val);
}

int removeq(){
	int val;
	if(front == -1)printf("Queue is empty\n");
	else if(front == rear){
		val = queue[front];
		front = rear -1;
	}
	else{
		val = queue[front];front++;
		return val;
	}
	return val;
}

void display(){
	int i;
	if(front ==-1)printf("queue is empty\n");
	else{
		printf("Elements are :");
		for(i= front;i<rear;i++){
			printf("%d\t",queue[i]);
		}
	}
}

void main(){
	int n,val;
	printf("\n1.For inserting element into stack\n2.to remove\n3.to display\n4.to exit\n");
	do{
		printf("Enter the corresponding number for operation to perform : \n");
		scanf("%d",&n);
		switch(n){
			case 1:printf("\nEnter a number to insert into the queue : \n");
					scanf("%d",&val);
					insert(val);
					break;
			
			case 2:printf("\n%d is removed\n",removeq());break;
			
			case 3:display();break;
			
			case 4:exit(0);break;
			
			default:printf("\ninvalid input\n");
		}
		
	}
	while(1);
}
