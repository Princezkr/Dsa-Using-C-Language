//Program To Insert An Element At A Given Position In An Array And Delete The Last Element
#include<stdio.h>
#include<conio.h>
void insertion(int pos, int val, int arr[], int *size){
    for(int i=(*size-1); i>=pos; i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=val;
    *size=*size+1;
}
void traverse(int arr[], int *size){
    for(int i=0; i<*size; i++){
        printf("%d ",arr[i]);
    }
}
void delete(int *size){
    (*size)--;
}
int main(){
    int arr[50]={10,20,30,40,50};
    int size=5,pos,val;
    printf("Array Before Insertion:");
    traverse(arr,&size);
    printf("\nEnter The Value To Be Inserted:");
    scanf("%d",&val);
    printf("Enter The Postion:");
    scanf("%d",&pos);
    insertion(pos,val,arr,&size);
    printf("Array After Insertion:");
    traverse(arr,&size);
    delete(&size);
    printf("\nAfter Deletion Of The Last Element:");
    traverse(arr,&size);
    getch();
}