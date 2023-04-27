#include<stdio.h>
int main(){
  int arr[]={10,20,30,40,50,60,70};
  int *ptr= arr;
  int i;
  for(int i=0; i<7; i++){
    printf("%d\n",*(ptr+i));
    printf("Address are \n");
    for(i=0; i<7; i++){
        printf("%u\n",&(ptr+i));
    }
  }  
    return 0;
}