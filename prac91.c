#include<stdio.h>
#include<stdlib.h>

int main()
{
struct employee
{
int emp_code;
char name[20];
int hra;
int da;
int ta;
};
FILE *fp;
struct employee e[5];
int i,x;
fp=fopen("Employee.txt","wb");
if(fp==NULL)
{
printf("\n Error Opening file");
exit(1);
}
printf("\n Enter the details:");
for(i=0;i<2;i++)
{
printf("\n\n Enter the employee code:");
scanf("%d",&e[i].emp_code);
fflush(stdin);
printf("\n\n Enter the name of the employee:");
gets(e[i].name);
fflush(stdin);
printf("\n\n Enter the HRA,DA and TA:");
scanf("%d%d%d",&e[i].hra,&e[i].da,&e[i].ta);
x=fwrite(&e[i],sizeof(e[i]),1,fp);
printf("\n%d",x);
}
fclose(fp);
return 0;
}