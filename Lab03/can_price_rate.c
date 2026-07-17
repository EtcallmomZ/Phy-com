#include <stdio.h>
#include <math.h>

int main()
{

    double price,dimension,height,volume,result;

    scanf("%lf",&price);
    scanf("%lf",&dimension);
    scanf("%lf",&height);

    dimension = dimension / 2;

    volume = height *  3.14159265359 * pow(dimension,2);
    result = price / volume;

    printf("Volume : %.2lfml\n",volume);
    printf("Baht/ml : %.4lf",result);
    
    return 0;

}