#include<stdio.h>
struct node{
	int data;
	struct node*next;
};
int main()
{ 
struct node *newnode1=(struct node*) malloc(sizeof(struct node));
struct node *newnode2=(struct node*) malloc(sizeof(struct node));
newnode1->data=2;
newnode->next=newnode2;
newnode2->data=3;
newnode->next=NULL;
printf("data=%d,self addr=%d",next addr=%d,newnode->data,newnode1,newnode->next);
printf("data=%d,addr=%d",newnode2->data,newnode2->next);
}
