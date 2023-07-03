//Program for pointer to structure ..
#include<stdio.h>
struct car{
char name[60];
int seat;
float price;

};
int main(){
    struct car c={"Fortuner",6,77575};
    struct car *ptr;
    ptr=&c;
    printf("Car name is = %s", ptr->name);
    printf("\nSeats=%d\n",ptr->name);
    printf("Price=%f",ptr->price);
    return 0;

}