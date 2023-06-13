//wtp to delete an element from a given position in 1D array.....
#include<stdio.h>
int main(){
    printf("The number of elements in the array : ");
    int n;
    scanf("%d",&n);

    printf("Enter the elements of the array: \n");
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position you want to delete : ");
    int p;
    scanf("%d",&p);

    for(int i=p-1; i<n-1; i++){
arr[i]=arr[i+1];
    }
    n--;

printf("The new array is :\n ");
    for(int i=0; i<n-1; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}