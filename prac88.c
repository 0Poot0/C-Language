#include<stdio.h>
void func(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    if(n!=8){
        printf("total no of students should be 8");
    }
    else{
        int arr[n];
        if(n==8){
           int arr[n];
           int num;
           for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
           }
        func(arr,n);
        }
       
    return 0;
}}

void func(int arr[], int n){
for(int i=0;i<n;i++){
    arr[i]=arr[i]+1;
}
for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
}
}