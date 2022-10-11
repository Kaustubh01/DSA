#include<stdio.h>
struct Node{
	int info;
	struct Node* left;
	struct Node* right;
};

struct Node* root = NULL;

void insert(int val){
	struct Node* p = NULL;
	struct Node* q = NULL;
	struct Node* n = (struct Node*)malloc(sizeof(struct Node));
	n->info = val;
	n->left = NULL;
	n->right = NULL;
	
	if(root == NULL)root = n;
	else{
		q = root;
		while(q != NULL){
			p=q;
			if(val<q->info)q=q->left;
			else q=q->right;
		}
		if(val < p->info) p->left = n;
		else p->right = n;
	}
}

void inorder(struct Node* t){
	if(t!=NULL){
		inorder(t->left);
		printf("%d\t",t->info);
		inorder(t->right);
	}
}
void preorder(struct Node* t){
	if(t!=NULL){
		printf("%d\t",t->info);
		preorder(t->left);
		preorder(t->right);
	}
}

void postorder(struct Node* t){
	if(t!=NULL){
		postorder(t->left);
		postorder(t->right);
		printf("%d\t",t->info);
	}
}

void search(int key){
	struct Node* t = root;
	while(t != NULL){
		if(t->info == key){
			printf("Element is found\n");
			break;
		}
		else{
			if(key > t->info)t=t->right;
			else t=t->left;
		}
	}
}


void main(){
	int n, val,key;
	while(1){
		printf("Enter a number\n");
		scanf("%d", &n);
		switch(n){
			case 1:
				printf("Enter the value to insert\n");
				scanf("%d",&val);
				insert(val);break;
			case 2:inorder(root);break;
			case 3:preorder(root);break;
			case 4:postorder(root);break;
			case 5:
				printf("Enter the value to search\n");
				scanf("%d",&key);
				search(key);break;
			case 6:exit(0);break;
		}
	}
}
