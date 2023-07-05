#include<stdio.h>
struct teacher{
    int uid;
    float salary;
};
int main(){
    struct teacher t1= {22176,80000};
    printf("%d, %f\n",t1.uid,t1.salary);
    return 0;
}