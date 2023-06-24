#include<stdio.h>

void binarySearch(int arr[],int n, int key);

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

binarySearch(arr,n,key);

    return 0;
}

void binarySearch(int arr[], int n, int key){
    int i=0;
    int beg=0;
int end=n-1;
    while(beg<=end){
        int mid=(beg+end)/2;
    if(arr[mid]==key){
        printf("Element found in position %d",mid+1);
        break;
    }
    else if(arr[mid]<key){
        beg=mid+1;
    }
    else if(arr[mid]>key){
       end=mid-1;
    }
    else{
        printf("Element not found..");
    }
    i++;
}}
