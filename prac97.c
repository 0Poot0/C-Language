//Finding the area of circle using pointers...
#include<stdio.h>
int main(){
    double area,radius;
    double *parea, *pradius;
    parea=&area;
    pradius= &radius;
    printf("Enter radius of circle: ");
    scanf("%lf",pradius);
    *parea=3.14*(*pradius)*(*pradius);
    printf("\nThe area of the circle is %lf",*parea);

    return 0;
}