//wtp s prgrsm to find the list of even numbers..

#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
int count=0;
int odd=0;
printf("List of even numbers=\n");
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            count++;
            printf("%d\n",arr[i]);
        }
        else{
            odd++;
            printf("%d\n",arr[i]);
        }
    }
    printf("No of even numbers = %d\n",count);
    printf("No of odd numbers = %d",odd);
    return 0;
}