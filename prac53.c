//WTP to swap two nos by call by value and call by reference...

#include<stdio.h>
int a=10;
void display(){
    int a;
    printf("a= %d",a);
}

void display();
int main(){
int b=20;
printf("a= %d",a);
printf("b= %d",b);

    return 0;
}