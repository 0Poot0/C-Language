#include<stdio.h>
int main(){
char ch;
printf("Enter a character : ");
scanf("%c",&ch);

switch(ch){
    case 'a':
    printf("%c is vowel",ch);
    break;
     case 'e':
    printf("%c is vowel",ch);
    break;
     case 'i':
    printf("%c is vowel",ch);
    break;
     case 'o':
    printf("%c is vowel",ch);
    break;
     case 'u':
    printf("%c is vowel",ch);
    break;
    default:
    printf("Constant..");
}
    
    return 0;

}