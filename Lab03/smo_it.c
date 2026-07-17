#include <stdio.h>
#include <math.h>

int main()
{
    double price1,percentage,sum,price2,result;

    scanf("%lf",&price1);
    scanf("%lf",&percentage);
    scanf("%lf",&sum);

    price2 = price1 - (price1*(percentage/100));

    result = price2 * sum;

    printf("%.2lf",result);
    
    return 0;

}