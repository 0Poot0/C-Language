#include<stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    // if(age<18){
    //     printf("Not eligible to vote...");
    // }
    // else{
    //     printf("Eligible to vote...");
    // }
    (age>=18) ? printf("Eligible to vote") : printf("Not eligible to vote..");
    return 0;
}