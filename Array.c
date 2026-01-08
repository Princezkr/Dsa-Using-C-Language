// This program demonstrates the use of variable-length arrays (VLAs) in C11.
#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Size Of The Array: ");
    scanf("%d",&n);
    int Arr[n];
    for(int i=0; i<n; i++){
        printf("Enter Element Number %d\n: ",i+1);
        scanf("%d",&Arr[i]);
    }
    for(int i=0; i<n; i++){
        printf("Element Number %d: ",i+1);
        printf("%d\n",Arr[i]);
    }
    getch();
}
