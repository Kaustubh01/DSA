#include<stdio.h>
#define SIZE 10

int stack[SIZE];
int top = -1;

void push(int val){
	if(top == SIZE -1)printf("Stack is full\n");
	else{
		top++;
		stack[top] = val;
		printf("%d is pushed into the stack \n",val);
	}
}

int pop(){
	int val;
	if(top == -1)printf("Stack is empty\n");
		else{
	 	val = stack[top];
	 	top--;
		}
	return val;
}

int peek(){
	int val;
	if(top == -1)printf("Stack is empty\n");
	else{
	 	val = stack[top];
		}
	return val;
	}
	
void display(){
	int i;
	if(top == -1)printf("Stack is empty\n");
	else{
			printf("Elements of the stack are:\n");
	 		for (i = 0;i<=top;i++){
	 			printf("%d\t",stack[i]);
			}
		}
	
}
void main(){
	int n,val;
	printf("\n1.For pushing element into stack\n2.for poping\n3.to peek\n4.to display\n5.to exit\n");
	do{
		printf("Enter the corresponding number for operation to perform : \n");
		scanf("%d",&n);
		switch(n){
			case 1:printf("\nEnter a number to push into the stack : \n");
					scanf("%d",&val);
					push(val);
					break;
			
			case 2:printf("\n%d is popped\n",pop());break;
			
			case 3:printf("\nElement at the top is %d\n",peek());break;
			
			case 4:display();break;
			
			case 5:exit(0);break;
			
			default:printf("\ninvalid input\n");
		}
		
	}
	while(1);
}

