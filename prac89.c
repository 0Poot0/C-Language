//wtp to demostrate the concept of fscanf..

#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char name[80];
    int roll_no;
    int x;
    fp=fopen("Student1.txt","r");
    if(fp==NULL){
        printf("\nFile could not be opened..");
        exit(1);
    }
    x=fscanf(fp,"%s%d",name,&roll_no);
    printf("\nNAME:%s\t ROLL NUMBER=%d",name,roll_no);
    printf("\n%d",x);
    fclose(fp);
    return 0;
}