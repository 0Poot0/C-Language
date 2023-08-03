#include<stdio.h>
int main(){
    int a=5;
    int *p= NULL;
    printf("%u",p);
    printf("%d\n",*p);
    p=&a;
    printf("%u\n",p);
    printf("%d\n",*p);
    return 0;
}