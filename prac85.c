//Nested structure...
//Nested 1 )structures are structures as members of another structure. 2) We can also take objects of one structure as member in another structure. 3) Dot operator is used twice because we are accessing first structure through the object of second structure. 4) a structure withoin a structure is used to create complex data application...

#include<stdio.h>
struct address{
char houseName[25];
char city[25];
char streetName[25];
};
struct Employee{
int id;
char name[25];
float salary;
struct address add;

};

int msin(){
    struct Employee E;
    printf("\n\tEnter Employee id :");
    scanf("%d",&E.id);
    printf("\n\tEnter employee name: ");
    scanf("%s",E.name);
    printf("Enter employee house name:");
    scanf("%s",E.add.houseName);
    printf("\n\tEnter employee city:");
    scanf("%s",E.add.city);
    printf("\n\tEnter employee street name: ");
    scanf("%s",E.add.streetName);
    printf("\nDetails of Employees");
    printf("\n\tEmployee id:%d",E.id);
    printf("\n\tEmployee id:%s",E.name);
    printf("\n\tEmployee id:%f",E.salary);
    printf("\n\tEmployee id:%s",E.add.houseName);
    printf("\n\tEmployee id:%s",E.add.city);
    printf("\n\tEmployee id:%s",E.add.streetName);
    return 0;
}