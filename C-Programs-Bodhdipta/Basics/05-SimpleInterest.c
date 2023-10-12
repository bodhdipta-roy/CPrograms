#include<stdio.h>
int main()
{
    int p,r,t;
    double i;
    printf("Input Principal, Rate and Time\n"); //Taking Input
    scanf("%d %d %d", &p,&r,&t);
    i=(p*r*t)/100; //Finding Simple Interest
    printf("The Simple Interest is=%f\n",i); //Printing Output
    return 0;
}
