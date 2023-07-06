//wtp to create a structure which will be object to array structure name Patient . Details :Patient name , Disease, Ward no., Total expenses to pay 

#include <stdio.h>
struct Patient{
char name[30];
char disease[30];
int wardNo;
float totalExpenses;
};

int main(){
    printf("Enter no of patients : ");
    int num;
    scanf("%d",&num);
    struct Patient p[num];
    for(int i=0; i<num; i++){
        printf("\nEnter details of the patient %d",i+1);
        printf("\nEnter patient name: ");
        scanf("%s",p[i].name);
        printf("Enter disease: ");
        scanf("%s",p[i].disease);
        printf("Enter wardNo: ");
        scanf("%d",&p[i].wardNo);
        printf("Enter total expenses : ");
        scanf("%f",&p[i].totalExpenses);
    }
    printf("\n");
    printf("*********************");
printf("\nDisplay details:\n");
    for(int i=0; i<num; i++){
        printf("-----------------------\n");
        printf("\nDetails of %d teacher : ", i+1);
       
            printf("%s, %s, %d, %f\n",p[i].name,p[i].disease,p[i].wardNo,p[i].totalExpenses);
        
    }
    printf("\n");
    printf("**********************");


    return 0;
}
