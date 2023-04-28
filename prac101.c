//wtp to read and display elements of 1D array using pointer to an array.. 

#include<stdio.h>
int main(){
    int i,n;
    int a[10];
    int *parr=a;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",parr+i);
    }
    printf("\nDisplaying the elements..");
    for(int i=0; i<5; i++){
        printf("%d",*(parr+i));
    }
        return 0;
}