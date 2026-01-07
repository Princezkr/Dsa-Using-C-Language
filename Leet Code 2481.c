// This program calculates the minimum number of cuts needed to divide a circle into a specified number of equal parts.
#include<stdio.h>
#include<conio.h>
int main(){
    int Equal_Part;
    printf("Enter How Many Equal Parts: ");
    scanf("%d",&Equal_Part);
    if(Equal_Part<1){
        printf("Enter A Valid Number: ");
    }
    else if(Equal_Part%2==0){
        printf("Total Cuts Required Is: %d",Equal_Part/2);
    }
    else if(Equal_Part==1){
        printf("Total Cuts Reqired Is: %d",Equal_Part*0);
    }
    else{
        printf("Total Cuts Required Is: %d",Equal_Part);
    }
    getch();
}