#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void insert(struct node** head,int data){
    struct node* node1=(struct node*)malloc(sizeof(struct node));
    node1->data=data;
    node1->next=*head;
    *head=node1;
}
void display(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main(){
    int n,data;
    struct node* head=NULL;
    printf("Enter Size Of The List: ");
    scanf("%d",&n);
    printf("Enter %d Elements Of The List: ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&data);
        insert(&head,data);
    }
    display(head);
}