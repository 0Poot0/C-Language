//WTP to print list of even nos from n numbers...

#include<stdio.h>
int main(){
    int num,i;
    printf("Enter n: ");
    scanf("%d",&num);

   int count=0;
    for(i=0; i<=num; i++){
        if(i%2==0){
            count++;
            printf("%d\n",i);
        }
    }
    printf("The count of even numbers is: %d",count);
    return 0;
}