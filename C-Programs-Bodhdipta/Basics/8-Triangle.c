#include<stdio.h>
int main()
{
    int b,h;
    double area;
    printf("Input base & Height respectively\n");
    scanf("%d %d",&b,&h);
    area=0.5*b*h;
    printf("Area = %lf\n", area);
    return 0;
}
