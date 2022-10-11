#include<stdio.h>
#include<string.h>

int top=-1;

struct Node
{
  char ch;
  struct Node *pre,*next;
}*stack[11];
void push(struct Node *str)
{
     if(top==10)
      printf("FULL");
     else
      stack[++top]=str;
}
struct Node *pop()
{
       return(stack[top--]);
}
void convert(char exp[])
{
  struct Node *op1,*op2,*t;
  int i;
  for(i=0;exp[i]!='\0';i++)
  if(exp[i]>='A'&&exp[i]<='Z'||exp[i]>='a'&&exp[i]<='z')
  {
    t=(struct Node*)malloc(sizeof(struct Node));
    t->ch=exp[i];
    t->pre=NULL;
    t->next=NULL;
    push(t);
  }
  else if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'||exp[i]=='^')
  {
    op1=pop();
    op2=pop();
    t=(struct Node*)malloc(sizeof(struct Node));
    t->ch=exp[i];
    t->next=op1;
    t->pre=op2;
    push(t);
  }
}
void display(struct Node *t)
{
     if(t!=NULL)
     {
       display(t->pre);
       printf("%c",t->ch);
       display(t->next);
       }
}
int main()
{
 char exp[10];

 printf("Enter Postfix Expression:");
 scanf("%s",exp);
 convert(exp);
 printf("Infix Exp is:");
 display(pop());
 return 0;
}
