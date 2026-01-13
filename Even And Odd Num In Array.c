#include<stdio.h>
#include<conio.h>
int main(){
    int arr[6]={3,6,8,7,5,10},even=0,odd=0;
    for(int i=0; i<6; i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Total Even Numbers In Array: %d\n",even);
    printf("Total Odd Numbers In Array: %d",odd);
    getch();
}