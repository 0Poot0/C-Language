//pass array element by element...
#include<stdio.h>
void value(int);
int main(){
int arr[100],i,n;
printf("Enter n");
scanf("%d",&n);
for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
    printf("Passing elements by value");
    for(int i=0; i<n; i++){
        value(arr[i]);
    }
}
    return 0;
}
void value(int e){
    printf("%d",e);
}