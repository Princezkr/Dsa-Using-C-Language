#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter The Size Of Array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The Elements In The Array Are:\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    getch();
}