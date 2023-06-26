//WTP to create a structure , name=teacher, name ,course name, uid, salary...

#include<stdio.h>
struct teacher{
char name[45];
char course_name[50];
int uid;
float salary;
};

int main(){
    struct teacher t1={"Antara","CLanguage",12218561,8787606848};
    printf("Display details:\n");
    printf("%s, %s, %d, %f",t1.name,t1.course_name,t1.uid,t1.salary);
    
    struct teacher t2={"Antara","CLanguage",12218561,8787606848};
    printf("Display details:\n");
    printf("%s, %s, %d, %f",t1.name,t1.course_name,t1.uid,t1.salary);
    return 0;
}