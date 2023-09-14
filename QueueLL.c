#include<stdio.h>
#include<stdlib.h>
 struct node{
 int data;
 struct node *next;
 }*rear,*front;

 void enqueue(){
 int value;
 printf("Enter the value:");
 scanf("%d",&value);
 struct node *new , *temp=rear;
 new=(struct node*)malloc(sizeof(struct node));
 new->data=value;
 new->next=NULL;
 if(front==NULL){
    front=new;
    rear=front;
    printf("value inserted!\n");
 }
 else{
    temp->next=new;
    rear=new;
    printf("value inserted\n");
 }

 }

 void dequeue(){
 struct node *temp=front;
 if(temp==NULL){
    printf("queue empty\n");
 }
 else{
    printf("%d\n",temp->data);
 }
 if(front==rear){
    free(temp);
    front=NULL;
    rear=NULL;
 }
 else{
    front=temp->next;
    free(temp);
 }
 }
 void display(){
 struct node *temp=front;
 if(front==NULL){
    printf("Queue empty\n");
 }
 else{
    while(temp->next!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    }
    printf("\n");
 }


 int main(){
 enqueue();
 enqueue();
 enqueue();

 display();
 return 0;
 }

