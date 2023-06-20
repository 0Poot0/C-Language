#include<stdio.h>
void linearSearch(int arr[], int n, int key);
int main(){
int n;
printf("Enter the no of elements in the array : ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the array :\n");
for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
}
printf("Enter the element to search : ");
int key;
scanf("%d",&key);

linearSearch(arr,n,key);
    return 0;

}
void linearSearch(int arr[],int n, int key){
    int flag=0;
for(int i=0; i<n; i++){
    if(arr[i]==key){
        printf("The element is in index %d",i);
        flag=1;
        break;
    }
}
if(flag==0){
    printf("Element not found");
}
}