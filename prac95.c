#include<stdio.h>
int main(){
    int a=10;
    int *p;
    p=&a;
    printf("%d\n",*p);
    printf("%u\n",p);
    
    return 0;
}