//wtp to implement structure as an array ...
#include<stdio.h>
struct teacher{
char name[20];
int uid;
float salary;
int rating;
};
int main(){
    int num;
    scanf("%d",&num);
    struct teacher t[num];
    for(int i=0; i<num; i++){
        printf("\nEnter details of %d teacher ",i+1);
        printf("\nEnter teacher name: ");
        scanf("%s",&t[i].name);
        printf("Enter uid: ");
        scanf("%d",&t[i].uid);
        printf("Enter salary: ");
        scanf("%f",&t[i].salary);
        printf("Enter salary: ");
        scanf("%d",&t[i].rating);
    }

    printf("Display details:\n");
    for(int i=0; i<5; i++){
        printf("Details of %d teacher", i+1);
       
            printf("\n %s, %d, %f, %d\n",t[i].name,t[i].uid,t[i].salary,t[i].rating);
        
    }
    return 0;
}