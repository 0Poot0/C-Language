#include<stdio.h>
int main(){
int a[3][3],i,j;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d\n",&a[i][j]);
        }
    }

printf("The first matrix is:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

printf("Enter the second matrix:\n");
    int art[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
 scanf("%d\n",&art[i][j]);
    }}

printf("The second matrix is:\n");
for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
 printf("%d ",art[i][j]);
    }
    printf("\n");
    }


int arr[3][3];
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
arr[i][j]=a[i][j]-art[i][j];
}
}

printf("The resultant subtraction of the matrix is : \n");
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
printf("%d ",arr[i][j]);
}
printf("\n");
}
    return 0;
}