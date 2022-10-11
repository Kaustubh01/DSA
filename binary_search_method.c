#include<stdio.h>
#define SIZE 5
int a[SIZE];

 binary_search(int key){
	int low=0, high=SIZE, mid,i,f=0;
	for(i=0;i<SIZE;i++){
		mid = (low + high)/2;
		if(key == a[mid]){
			printf("Element found");
			f= 1;
			break;
		}
		else if(key<a[mid]){
			high = mid -1;
			
		}
		else{
			low = mid + 1;
		}
		
	}
	if(f==0)printf("Element not found\n");
	return f;
}

void main(){
	int i,key;
	for(i=0;i<SIZE;i++){
		scanf("%d", &a[i]);
	}
	
	printf("Enter the key you want to search");
	scanf("%d",&key);
	binary_search(key);
	}
