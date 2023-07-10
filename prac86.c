#include<stdio.h>
struct Employee{ 
    char ename[20]; 
    int ssn; 
    float salary; 
    struct dob{ 
        int date,month,year; 
    }db1; 
}emp={"Aniket",1000,1000,{22,6,1990}}; 
void main(){ 
    printf("Employee Name : %s\n",emp.ename); 
    printf("Employee SSN : %d\n",emp.ssn); 
    printf("Employee Salary : %2.f\n",emp.salary); 
    printf("Employee DOB : %d/%d/%d",emp.db1.date,emp.db1.month,emp.db1.year); 
}