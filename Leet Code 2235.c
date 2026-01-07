// This program takes two integers as input from the user and calculates their sum.
#include<stdio.h>
#include<conio.h>
int main(){
    int Num1,Num2,Sum;
    printf("Enter Num1: ");
    scanf("%d",&Num1);
    printf("Enter Num2: ");
    scanf("%d",&Num2);
    Sum=Num1+Num2;
    printf("Sum Of The Numbers is: %d",Sum);
    getch();
}