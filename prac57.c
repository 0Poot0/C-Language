#include<stdio.h>
int main(){
    int roll_no[10];
    int i;
    for(int i=0; i<10; i++){
        scanf("%d",&roll_no[i]);
    }
    printf("Traversing array elements\n");
    for(i=0;i<10;i++){
        printf("%d\n",roll_no[i]);
    }
    return 0;
}