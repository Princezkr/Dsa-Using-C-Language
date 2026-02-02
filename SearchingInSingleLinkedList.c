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
void search(struct node* head,int key){
    struct node* temp=head;
    int pos=1;
    while(temp!=NULL){
        if(temp->data==key){
            printf("The Key: %d Is Found At Position: %d",key,pos);
            return;
        }
        pos++;
        temp=temp->next;
    }
    printf("The Key Is Not Found In The List");
}
int main(){
    int n;
    struct node* head=NULL;
    printf("Enter Size Of The List: ");
    scanf("%d",&n);
    printf("Enter %d Elements Of The List: ",n);
    for(int i=0; i<n; i++){
        int data;
        scanf("%d",&data);
        insert(&head,data);
    }
    display(head);
    int key;
    printf("Enter The Value To Search In List: ");
    scanf("%d",&key);
    search(head,key);
}