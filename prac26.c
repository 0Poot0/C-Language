//WTP to create a calculator by using switch statement...

#include<stdio.h>
int main(){

    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for division\n");
    printf("Press 4 for multiplication\n");

    int num,a,b;
    printf("Enter your choice : ");
    scanf("%d",&num);

printf("Enter a : ");
scanf("%d",&a);
printf("Enter b : ");
scanf("%d",&b);


switch(num){
case 1:
    printf("%d+%d= %d",a,b,(a+b));
    break;
case 2:
    printf("%d-%d= %d",a,b,(a-b));
break;
case 3:
    printf("%d/%d= %d",a,b,(a/b));
break;
case 4:
    printf("%d*%d= %d",a,b,(a*b));
break;
default:
printf("Invalid input..");
}
    return 0;
}