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
struct employee e;
int i,x;
fp=fopen("Employee.txt","rb");
if(fp==NULL)
{
printf("\n Error Opening file");
exit(1);
}
printf("\n THE DETAILS OF THE EMPLOYEE ARE:");
while(1)
{
fread(&e,sizeof(e),1,fp);
if(feof(fp))
break;
printf("\n\n Employee Code:%d",e.emp_code);
printf("\n\n Name:%s",e.name);
printf("\n\n HRA,DA and TA:%d %d %d",e.hra,e.da,e.ta);
}
fclose(fp);
return 0;
}