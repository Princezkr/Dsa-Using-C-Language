#include<stdio.h>
#include<conio.h>
int main(){
    int r,c;
    printf("Enter The Row Of The Array: ");
    scanf("%d",&r);
    printf("Enter The Coloumn Of The Array: ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The Matrix Is:\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
    int size=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j]!=0){
                size++;
            }
        }
    }
    if(size<=(r*c)-size){
        printf("The Matrix Is A Sparce Matrix\n");
    }
    else{
        printf("The Matrix Is Not A Sparce Matrix\n");
    }

    int newArr[3][size],s=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j]!=0){
                newArr[0][s]=i;             //Stores Row Number Which Have A Non Zero value In The Array
                newArr[1][s]=j;             //Stores Coloumn Number  Which Have A Non Zero Value In The Array
                newArr[2][s]=arr[i][j];     //Stores Non Zero Values From Array In New Array
                s++;
            }  
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<size; j++){
            if(i==0 && j==0){
                printf("Rows:     ");
            }
            if(i==1 && j==0){
                printf("Coloumns: ");
            }
            if(i==2 && j==0){
                printf("Values:   ");
            }
            printf("%d\t",newArr[i][j]); 
        }
        printf("\n");
    }
    getch();
}