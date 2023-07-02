#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    int diameter= 2*r;
    float distance_travelled= 2*3.14*r;
    printf("Distance travelled is %f having radius %d with diameter %d .", distance_travelled,r,diameter);

    return 0;
}