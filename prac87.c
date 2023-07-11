#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("xyz.txt","w");
    if(fptr==NULL)
    printf("\nfile cannot be opened ");
    else{
        printf("\nfile created successfully");
    }
    return 0;
}