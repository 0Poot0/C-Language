#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++){
    scanf("%d",arr[i]);
}
int p;
scanf("%d",&p);
int num;
scanf("%d",&num);
int arr2[n+1];
for(int i=0; i<n; i++){
    if(i!=p-1){
    arr2[i]=arr[i];
    }
    if(i==p-1){
        arr[p-1]=num;
    }
}
for(int i=p+1; i<n; i++){
    arr2[i+1]=arr2[i];
}
    return 0;
}