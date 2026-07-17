#include <stdio.h>

int main()
{
    double num1,num2,num3,num4,sum,avg;

    scanf("%lf",&num1);
    scanf("%lf",&num2);
    scanf("%lf",&num3);
    scanf("%lf",&num4);

    sum = num1 + num2 + num3 + num4;
    avg = (sum) / 4;

    printf("Summation is %.2lf\n" , sum);
    printf("Average is %.3lf" , avg);

    return 0;
}
