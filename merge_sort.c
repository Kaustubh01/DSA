#include<stdio.h>
void merge_sort(int a[], int beg, int end){
	int mid;
	if(beg<end){
		mid = (beg+end)/2;
		merge_sort(a,beg, mid);
		merge_sort(a,mid + 1, end);
		merge(a,beg,mid,end);
	}
}

void merge(int a[], int beg, int mid, int end){
	int i = beg,j=mid+1,t[20], k,index = beg;
	while(i<=mid && j<=end){
		if(a[i]<a[j]){
			t[index]=a[i];
			index++;
			i++;
		}
		else{
			t[index]= a[j];
			index ++;
			j++;
		}
	}
	while(i<=mid){
		t[index]=a[i];
		i++;
		index++;
	}
	while(j<=end){
		t[index]=a[j];
		j++;
		index++;
	}
	for(k=beg;k<index;k++){
		a[k]=t[k];
	}
}

void main(){
	int array[20],n,i;
	printf("Enter the length of the array\n");
	scanf("%d",&n);
	printf("\nEnter the array elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	merge_sort(array, 0, n-1);
	printf("\nSorted array:\n");
	for(i=0;i<n;i++){
		printf("%d\t",array[i]);
	}
}
