//print table of any no using for loop.

#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for(int i=0; i<=10; i++){
        printf("%d * %d = %d\n",num,i,(num*i));
    }
    return 0;
}