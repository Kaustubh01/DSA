#include<stdio.h>

struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};

struct Node* create(){
	int key;
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	printf("\nEnter a number(-1 for no node)");
	scanf("%d", &key);
	if(key==-1)return NULL;
	node->data = key;
	
	printf("Left of %d is: ",key);
	node->left = create();
	
	printf("right of %d is: ",key);
	node->right = create();
}

void preorder(struct Node* root){
	if(root == NULL){
		return;
	}
	printf("%d\t",root->data);
	preorder(root->left);
	preorder(root->right);
}
void inorder(struct Node* root){
	if(root == NULL){
		return;
	}
	inorder(root->left);
	printf("%d\t",root->data);
	inorder(root->right);
}

void postorder(struct Node* root){
	if(root == NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d\t",root->data);
}
void main(){
	printf("\nEnter a number:\t");
	int n;
	struct Node* root = NULL;
	while(1){
		scanf("%d",&n);
		switch(n){
			case 1:root = create();break;
			case 2:preorder(root);break;
			case 3:inorder(root);break;
			case 4:postorder(root);break;
			case 5: exit(0);break;
		}
	}
	
	
}
