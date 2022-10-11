#include<stdio.h>
#define SIZE 5

int split(int a[], int lb, int ub){
	int l = lb, r = ub, p = a[lb], t;
	while(l<r){
		while(a[l]<=p && l<r)
		l++;
		while(a[r]>p)
		r--;
		if(l<r){
			t = a[l];
			a[l] =a[r];
			a[r] = t;
		}
		else{
			a[lb] = a[r];
			a[r] = p;
		}
	}
	return r;
}

void quick_sort(int a[], int lb, int ub){
	int r;
	if(lb<ub){
		r = split(a,lb,ub);
		quick_sort(a,lb, r-1);
		quick_sort(a,r+1,ub);
	}
}

void main(){
	int i, n, a[SIZE];
	printf("Enter the elements of the array\n");
	for(i = 0; i<SIZE; i++){
		scanf("%d", &a[i]);
	}
	quick_sort(a,0,SIZE-1);
	printf("Sorted array is:\n");
	for(i = 0; i<SIZE; i++){
		printf("%d\t", a[i]);
	}
}
