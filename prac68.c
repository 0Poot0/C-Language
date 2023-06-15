//Pass entire array...
#include<stdio.h>
void reference(int [], int);
void sum1(int [], int );
int main(){
    int arr[100],i,n;
    printf("Enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements by reference");
    reference(arr,n);
    sum1(arr,n);
    return 0;
}

void reference(int x[], int size){
    int i;
    for(i=0; i<size; i++){
        printf("%d\n",x[i]);
    }
}
void sum1(int x[], int size){
    int i;
    int sum=0;
    for(i=0;i<size;i++){
        sum=sum+x[i];
    }
    printf("%d",sum);
}

