#include<stdio.h>
int main(){
    int a[]={10,20,30,40,50};
    int *p=a;
    printf("%d\n",*p);
    printf("%u\n",p);
    p++;
    printf("%d\n",*p);
    printf("%u",p);
    p=p+2;
    prinf("%d\n",*p);
    return 0;
}
