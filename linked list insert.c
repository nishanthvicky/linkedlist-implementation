//single linkedlist implementation
#include<stdio.h>
struct node{
	int data;
	struct node* next;
};
struct node *head=0,*temp,*newnode;
void insert(){
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
			insert();
			display();
}
