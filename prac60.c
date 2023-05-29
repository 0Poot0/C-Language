#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    
    int max=0;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        //if(arr[i]<){
    }
    return 0;
}