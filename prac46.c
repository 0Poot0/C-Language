#include<stdio.h>
int main(){
    int a= 5643;
    printf("%d\n",a);
    printf("*%d\n",a);
    printf("*%d*",a);
    printf("*%-6d*\n",a);
    printf("*%6d*\n",a);
    printf("*%06d*\n",a);
    printf("*%16d*\n",a);
    return 0;
}