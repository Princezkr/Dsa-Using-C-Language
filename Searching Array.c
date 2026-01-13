#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int main(){
    int a[7]={10,23,46,66,73,78,90},n=7,l=0,u=n-1,mid,t;
    bool Result=true;
    printf("Enter The Target Value: ");
    scanf("%d",&t);
    while(l<=u){
        mid=(l+u)/2;
        if(t==a[mid]){
            printf("Found At: %d",mid);
            Result=false;
            break;
        }
        else if(t>a[mid]){
            l=mid+1;
        }
        else{
            u=mid-1;
        }
    }   
    if(Result){
        printf("The Element Not Found");
    }
    getch();
}