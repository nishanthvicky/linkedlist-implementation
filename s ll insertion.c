#include<stdio.h>
struct node{
	int data;
	struct node * next;
};
struct node *head=0,*temp,*newnode,*prevnode;
int pos;
void create(){
	int i=1;
	while(i==1){
	newnode=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	head=temp=newnode;
	else{
		temp->next=newnode;
		temp=newnode;
	}
	printf("press 1 to enter the value or 0 to exit");
	scanf("%d",&i);
}
}
void insert(){
	int c;
	printf("press\n1 to add at begin\n2 to add at end\n3 to add at specific position");
	scanf("%d",&c);
	temp=head;
	int j=0;
	switch(c){
		case 1:
				newnode=(struct node*)malloc(sizeof(struct node));
			scanf("%d",&newnode->data);
			newnode->next=temp;
			head=newnode;
			break;
		case 2:
				newnode=(struct node*)malloc(sizeof(struct node));
			scanf("%d",&newnode->data);
			while(temp->next!=0){
				temp=temp->next;
			}
			newnode->next=0;
			temp->next=newnode;
			break;
	case 3:
		scanf("%d",&pos);
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		while(j<pos-1){
			prevnode=temp;
			temp=temp->next;
			j++;
		}
		newnode->next=temp;
		prevnode->next=newnode;
		break;
	}
}
void display(){
		temp=head;
	if(temp==0){
		printf("LL is empty");
	}
	else{
	while(temp!=0){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
}
int main(){
	create();
	insert();
	display();
}
