#include <stdio.h>

int main()
{
    char num0[11];
    double  num1,num2,sum,diff,mul,divide;

    scanf("%s",num0);

    sscanf(num0,"%lf,%lf",&num1,&num2);

    sum = num1 + num2;
    diff = num1 - num2;
    mul = num1 * num2;
    divide = num1 / num2;

    printf("The sum of the given numbers : %lf\n",sum);
    printf("The difference of the given numbers : %lf\n",diff);
    printf("The product of the given numbers : %lf\n",mul);
    printf("The quotient of the given numbers : %lf",divide);

    

    return 0;

}