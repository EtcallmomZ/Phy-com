#include <stdio.h>
#include <math.h>

int main()
{
    double num1,num2,num3,result;

    scanf("%lf",&num1);
    scanf("%lf",&num2);

    result = hypot(num1,num2);

    printf("%.2lf",result);
    

    return 0;

}