#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

printf("Enter the numbers :\n");

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0; i<n; i++){
        count=count+arr[i];
    }
    printf("The sum of the numbers is : %d",count);
    return 0;
}