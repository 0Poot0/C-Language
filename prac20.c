//WTP to implement a grade system to upload marks of maths,python,chemistry, make average and if person having average greater than 90 grade 0, than 80 grade A , greater ths  70 grade b,60 grade c, 50 grade d, other reappear.


#include<stdio.h>
int main(){
    int python,maths,chemistry;
    printf("Enter marks of python : ");
    scanf("%d",&python);
     printf("Enter marks of marks : ");
     scanf("%d",&maths);

      printf("Enter marks of python : ");
      scanf("%d",&chemistry);

    int average = (python+maths+chemistry)/3;
    printf("Average = %d \n",average);

    if(average>90){
        printf("Grade O");
    }
    else if(average>80){
        printf("Grade A");
    }
    else if(average>70){
        printf("Grade B");
    }
    else if(average>60){
        printf("Grade C");
    }
    else if(average>50){
        printf("Grade D");
    }
    else{
        printf("Reappear...");
    }


    return 0;
}