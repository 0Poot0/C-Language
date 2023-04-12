//Factorial of a no.

#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);

    int fac=1;
    for(int i=1; i<=num; i++){
       fac=fac*i;
       //printf("%d\n",fac);
    }
    printf("%d",fac);
    return 0;
}
