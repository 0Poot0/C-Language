//wtp to find the sum and mean of 1D array elements using pointer to array...

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
    //Sum of the elements..
    int sum=0;
    for(int i=0; i<5; i++){
     sum=sum+*(parr+i);
    }
    printf("Sum = %d",sum);
    printf("\nMean=%d",sum/n);
    return 0;}

    