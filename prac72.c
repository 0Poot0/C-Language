#include<stdio.h>
void del(int[],int,int);
void print(int);
int main(){
int i,n;
printf("Enter the size of an array : ");
scanf("%d",&n);
int a[n],vlu,idx;
for(i=0;i<n;i++)scanf("%d",&a[i]);
printf("Index of value to be removed : ");
scanf("%d",&idx);
printf("You entered : ");
for(i=0;i<n;i++)print(a[i]);
printf("\n");
printf("Deleted array : ");
del(a,n,idx);
return 0;
}
void print(int i){
printf("%d ",i);
}
void del(int a[],int size,int idx){
int i;
for(i=idx;i<size-1;i++)a[i] = a[i+1];
size--;
for(i=0;i<size;i++)printf("%d ",a[i]);
}