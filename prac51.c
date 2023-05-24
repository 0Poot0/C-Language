//WTP to find factorial of a no using recursion...
#include<stdio.h>

int factorial(int num){
    if(num==0){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}

int factorial(int num);
int main(){
    int num;
    scanf("%d",&num);
printf("Factorial= %d",factorial(num));
    return 0;
}