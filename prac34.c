//Wap to print sum of digits of a no....

#include<stdio.h>
int main(){
    int a;
    scanf("%ld",&a);
    int i=1;
    int sum=0;
    int n;
    while(n!=0){
        n=a%10;
        sum=sum+n;
        a=a/10;
        i++;
    }
    printf("%d",sum);
    return 0;
}