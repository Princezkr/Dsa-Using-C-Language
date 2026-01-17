#include<stdio.h>
int main(){
    int r,c;
    printf("Enter Row Of Array: ");
    scanf("%d",&r);
    printf("Enter Column Of Array: ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("Enter Element: ");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<r; i++){
        int Max=arr[i][0];
        int Min=arr[i][0];
        for(int j=0; j<c; j++){
            printf("Element: %d\n",arr[i][j]);
            if(arr[i][j]>Max){
                Max=arr[i][j];
            }
            if(arr[i][j]<Min){
                Min=arr[i][j];
            }
        }
        printf("The Minimum Value Of Row %d: %d\n",i+1,Min);
        printf("The Maximum Value Of Row %d: %d\n",i+1,Max);
    }
    
}