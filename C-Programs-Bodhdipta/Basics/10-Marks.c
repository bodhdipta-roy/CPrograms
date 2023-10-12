#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,total;
    double avg;
    printf("Input marks for:\n");
    printf("Subject 1:\n");
    scanf("%d",&sub1);
    printf("Subject 2:\n");
    scanf("%d",&sub2);
    printf("Subject 3:\n");
    scanf("%d",&sub3);
    total=sub1+sub2+sub3;
    avg=total/3;
    printf("Total of 3 subjects = %d\n",total);
    printf("Average of 3 subjects = %lf\n", avg);
    return 0;
}
