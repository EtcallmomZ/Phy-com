#include <stdio.h>
#include <math.h>

int main()
{

    double x,y;

    scanf("%lf %lf",&x,&y);

    double sum = sqrt(pow(x,2)+pow(y,2));

    printf("sqrt(%.0lf^2+%.0lf^2)=%.2lf",x,y,sum);

    return 0;
}