//WTP to display pattern...

#include<stdio.h>
int main(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; i>=j; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}