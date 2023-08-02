//wtp a program to implement fseek(), ftell(), and frewind()...
// C Program to demonstrate the use of fseek()
#include <stdio.h>

int main()
{
FILE *fp;
char str[12];
fp = fopen("test.txt", "r");

// Moving pointer to end
fseek(fp, -4, SEEK_END);
fscanf(fp,"%s",str);
printf("\n%s",str);
// Printing position of pointer
printf("\n%ld", ftell(fp));
rewind(fp);
fseek(fp, 2, SEEK_SET);
fscanf(fp,"%s",str);
printf("%d",ftell(fp));
// fgets(str,12,fp);
// printf("\n%s",str);
return 0;
}