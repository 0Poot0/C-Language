#include<stdio.h>
void bubbleSort(int arr[], int n);
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
bubbleSort(arr,n);

printf("Insert the key you want to search for : ");
int key;
scanf("%d",&key);

linearSearch(arr,n,key);

    return 0;
}
void bubbleSort(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("The new array is :\n");
   for(int i=0; i<n; i++){
    printf("%d \n",arr[i]);
   } 
}

void linearSearch(int arr[],int n, int key){
    int flag=0;
for(int i=0; i<n; i++){
    if(arr[i]==key){
        printf("The element is in position %d",i+1);
        flag=1;
        break;
    }
}
if(flag==0){
    printf("Element not found");
}
}