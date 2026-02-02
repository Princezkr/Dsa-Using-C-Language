#include<stdio.h>
int main(){
    int row,col;
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&row,&col);
    int matrix[row][col];
    printf("Enter the elements of the matrix:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Original matrix:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    int transposeMatrix[col][row];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            transposeMatrix[j][i]=matrix[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            printf("%d ",transposeMatrix[i][j]);
        }
        printf("\n");
    }
}
