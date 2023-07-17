#include<stdio.h>
int main(){
    int noOfChocolates;
    scanf("%d",&noOfChocolates);
    int noOfChildren;
    scanf("%d",&noOfChildren);
    int remainingChocolates= 10%3;
    int chocolatesDistributed=10/3;
    printf("So, %d chocolate will be left as all %d students will have %d chocolates each. ", remainingChocolates,noOfChildren,chocolatesDistributed);



    return 0;
}