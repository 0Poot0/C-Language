//WAP to demostrate the concept of goto statement...

#include<stdio.h>
int main(){
 int n=10;
 Aman:
 printf("%d ",n);
 n=n-1;
 if(n>0)
 goto Aman;
    return 0;
}