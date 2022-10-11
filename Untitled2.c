#include <stdio.h>
#define size 5
int a[size];
int i;
void seqsrch(int val)
{   int i;
	printf("Enter The Value To Search");
	scanf("%d",&val);
	
	for(i=0; i < size;i++)
	{
		if(a[i]==val)
		{
			printf("Element Is Found ");
			break;
		}
		
	}
	if(i==5)
	{
		printf("Element Is not found");
	}	
	
} binary_search(int key){
	int low=0, high= Size, mid,i,f=0;
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

