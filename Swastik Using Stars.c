#include <stdio.h>
#include <conio.h>
int main(){
    int n=5,mid=n/2;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i==0 && j>=mid) || (j==0 && i<=mid) || (i==mid || j==mid) || (i==n-1 && j<=mid) || (j==n-1 && i>=mid)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    getch();
}