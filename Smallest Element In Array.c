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
    int Smallest=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<Smallest){
            Smallest=arr[i];
        }
    }
    printf("The Smallest Element Of Array Is: %d",Smallest);
    getch();
}