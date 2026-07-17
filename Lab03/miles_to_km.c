#include <stdio.h>

int main()
{
    double mile = 1.60934 ,input,result;

    scanf("%lf",&input);

    result = input * mile;

    printf("%.2lf",result);

    return 0;

}