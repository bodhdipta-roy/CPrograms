#include<stdio.h>
int main()
{
    int l,b,a;
    printf("Input Length and Breadth\n"); //asking for input
    scanf("%d %d",&l,&b); //taking input
    a=l*b; //finding out area
    printf("Area of Rectangle is = %d\n",a); //printing result
    return 0;
}
