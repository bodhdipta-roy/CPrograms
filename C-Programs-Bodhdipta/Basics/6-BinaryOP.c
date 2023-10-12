#include<stdio.h>
int main()
{
    double a,b,sum,pro,div,sub; //initializing variables
    printf("Input 2 number:-\n"); //asking for input
    scanf("%lf %lf",&a,&b); //taking input
    sum=a+b; //sum
    pro=a*b; //product
    div=a/b; //division
    sub=a-b; //multiplication
    printf("The Sum is = %lf\n", sum); //printing sum
    printf("The Subtraction is = %lf\n", sub); //printing substraction
    printf("The Product is = %lf\n", pro); //printing product
    printf("The Division is = %lf\n", div); //printing division
    return 0;
}
