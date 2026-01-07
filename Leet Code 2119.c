// This program checks if a given integer is a palindrome.
#include<stdio.h>
#include<conio.h>
int Reverser(int Num){
    int Rev=0,temp;
    while (Num>0){
        temp=Num%10;
        Rev=Rev*10+temp;
        Num=Num/10;
    }
    return Rev;
}
int main(){
    int Num,Rev1,Rev2;
    printf("Enter a Number: ");
    scanf("%d",&Num);
    Rev1=Reverser(Num);
    Rev2=Reverser(Rev1);
    if (Num==Rev2){
        printf("The Number %d is a Palindrome Number",Num);
    }
    else{
        printf("The Number %d is Not a Palindrome Number",Num);
    }
    getch();
}