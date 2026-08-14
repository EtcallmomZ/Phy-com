#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{

    int degrees,u;

    scanf("%d",&degrees);
    scanf("%d",&u);

    printf("theta (degree) : %d\n",degrees);
    printf("u (m/s) : %d\n",u);

    double radius = (degrees * M_PI)/ 180;

    double h = (pow(u,2) * pow(sin(radius),2)) / (2 * 9.81);

    printf("h (m) : %.4lf\n",h);


    return 0;
}