//Bubble Sort....

#include<stdio.h>
void bubbleSort(int arr[], int n);
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
    printf("%d ",arr[i]);
   }
}