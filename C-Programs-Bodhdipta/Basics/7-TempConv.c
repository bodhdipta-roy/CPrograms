#include<stdio.h>
int main()
{
    int temp1,temp2;
    double f,c;
    printf("Input Temperature in Celsius\n");
    scanf("%d",&temp1);
    f=((9*temp1)/5)+32;
    printf("The Temperature in Fahrenheit = %f °F\n",f);
    printf("Input Temperature in Fahrenheit\n");
    scanf("%d",&temp2);
    c=(5*(temp2-32))/9;
    printf("The Temperature in Celsius = %f °C\n",c);
    return 0;
}
