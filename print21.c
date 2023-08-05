//Switch..cases accepts int and char only...

#include<stdio.h>
int main(){
    int day;
    printf("Enter a number between 0 to 6= ");
    scanf("%d",&day);

    switch(day){

        default:
        printf("Invalid input..");
        break;
        case 0:
        printf("Sunday");
        break;
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tueday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;

        //default:
        //printf("Invalid input..");
    }

    return 0;
}