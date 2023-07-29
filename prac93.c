//getw- it is an integer oriented function...it is used to read an integer from file in which numbers are stored..a=getw(fptr)
//putw- it is used for the writing ....putw(a,fptr)..

#include<stdio.h>
int main(){
    FILE * fp;
    char temp;
    fp=fopen("a.txt","r");
    while((temp=getc(fp))!=EOF){
        if(temp=='x'){
            fseek(fp,+,1);
            putc("x",fp);
        }
    }
       return 0;
}