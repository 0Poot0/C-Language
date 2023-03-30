//Write a program to check which no is greater out of the three inputs...

#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int b;
    printf("Enter a number : ");
     scanf("%d",&b);

     int c;
    printf("Enter a number : ");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("%d is greater than %d and %d",a,b,c);
    }
    else if(b>a && b>c){
        printf("%d is greater than %d and %d",b,a,c);
    }
    else if(c>a && c>b){
        printf("%d is greater than %d and %d",c,a,b);
    }
    else{
        printf("Values are same...");
    }

    return 0;
}