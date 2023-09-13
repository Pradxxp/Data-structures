#include<stdio.h>
#include<conio.h>
struct node{
int data;
struct node *next;
}*top=NULL;

void push(){
int ele;
printf("enter element to push:");
scanf("%d",&ele);
struct node *new;
new = (struct node*)malloc(sizeof(struct node));
new->data=ele;
new->next=top;
top=new;
printf("element inserted\n");
}

void pop(){
struct node *temp;
if(top==NULL)
{
    printf("underflow\n");
}
else
{
    temp=top;
    top=top->next;
    temp->next=NULL;
    printf("deleted element is %d\n",temp->data);
    free(temp);
}
}

void peak(){
if(top==NULL)
{
    printf("Stack empty\n");

}
else
{
    printf("TOP = %d\n",top->data);
}
}


void display(){
struct node *temp=top;
if(temp==NULL){
    printf("no elements\n");
}
else{
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
}



int main(){
int choice;
printf("menu\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.peak\n");
printf("4.Display\n");
printf("5.Exit\n");
while(1){
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:push();
        break;
        case 2:pop();
        break;
        case 3:peak();
        break;
        case 4:display();
        break;


    }
}
}
