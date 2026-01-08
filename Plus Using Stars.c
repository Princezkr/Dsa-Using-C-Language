#include <stdio.h>
#include <conio.h>
int main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==n/2 || j==n/2){
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