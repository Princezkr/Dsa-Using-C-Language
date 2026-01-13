#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int main(){
    int arr[5]={7,-12,14,-20,33},Target;
    bool Result=true;
    printf("Enter The Target Element In Array: ");
    scanf("%d",&Target);
    for(int i=0; i<5; i++){
        if(arr[i]==Target){
            printf("Target Element %d Found At Index %d",Target,i);
            Result=false;
            break;
        }   
    }
    if(Result){
        printf("Target Element %d Not Found In Array",Target);
    }
    getch();
}