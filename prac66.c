#include<stdio.h>
int main(){

int rows;
printf("Enter the number of rows: ");
scanf("%d",&rows);

int col;
printf("Enter the number of columns: ");
scanf("%d",&col);

printf("Enter the values: \n");
    int a[rows][col],i,j;
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            scanf("%d/n",&a[i][j]);
        }
    }

int sum=0;
for(int i=0; i<rows; i++){
    for(int j=0; j<col; j++){     
            sum=sum+a[i][j];
        }
    }

printf("The matrix is\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
printf("%d ",a[i][j]);
        }
        printf("\n");
    }

printf("The sum of the elements is = %d",sum);

//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
// printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
    return 0;
}