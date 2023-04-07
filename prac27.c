#include<stdio.h>
int main(){

    printf("Press + for addition\n");
    printf("Press - for subtraction\n");
    printf("Press / for division\n");
    printf("Press * for multiplication\n");

    char num;
    int a,b;
    printf("Enter symbol your choice : ");
    scanf("%c",&num);

printf("Enter a : ");
scanf("%d",&a);
printf("Enter b : ");
scanf("%d",&b);


switch(num){
case '+':
    printf("%d+%d= %d",a,b,(a+b));
    break;
case '-':
    printf("%d-%d= %d",a,b,(a-b));
break;
case '/':
    printf("%d/%d= %d",a,b,(a/b));
break;
case '*':
    printf("%d*%d= %d",a,b,(a*b));
break;
default:
printf("Invalid input..");
}
    return 0;
}