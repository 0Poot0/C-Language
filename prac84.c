//Create a union....
#include<stdio.h>
union car{
char name[40];
int seats;
float price;
};
int main(){
    union car c;
    printf("Enter name : ");
    scanf("%s",c.name);
    printf("Car name is = %s\n",c.name);
    printf("Enter seats : ");
    scanf("%d",&c.seats);
    printf("Car seats = %d\n",c.seats);
    printf("Enter price : ");
    scanf("%f",&c.price);
    printf("Car price = %f\n",c.price);
   
    return 0;
}