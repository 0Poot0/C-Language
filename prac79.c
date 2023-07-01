//WTP to create a structure named as car data members of car are carname, price , no of seats....
#include<stdio.h>
struct car{
    char name[20];
    float price;
    int seats;
};

int main(){
struct car c1;
printf("Enter car name: ");
scanf("%s",&c1.name);
printf("Enter price: ");
scanf("%f",&c1.price);
printf("Enter no of seats: ");
scanf("%d",&c1.seats);

printf("\nDetails of first car:\n");
printf("car name: %s\n",c1.name);
printf("car price: %f\n",c1.price);
printf("car seats: %d",c1.seats);
    return 0;
}