#include <stdio.h>
#include <math.h>

double parameter(double a,double b)
{
    double c;
    c = sqrt(pow(a,2) + pow(b,2));
    return a+b+c;
}

double area(double a , double b)
{
    return 0.5*a*b;
}



int main()
{
    double h;
    double w;

    scanf("%lf",&h);
    scanf("%lf",&w);

    printf("Perimeter: %.2lf\n" ,parameter(h,w));
    printf("Area: %.2lf" ,area(h,w));
    
    return 0;
}

