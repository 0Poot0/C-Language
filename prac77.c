//write a program to access an array with a structure....

#include<stdio.h>
 struct KOCCK{
        int roll_no;
        int reg_no;
        float cgpa;
        char name[50];
    };

    int main(){
    struct KOCCK obj;
    obj.roll_no= 1;
    obj.reg_no = 12218561;
    obj.cgpa= 10.00;

    printf("Roll no is %d %d %2f",obj.reg_no, obj.roll_no, obj.cgpa);

    return 0;
} 