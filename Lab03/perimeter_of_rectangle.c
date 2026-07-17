#include <stdio.h>

int main()
{

    // perimeter of retangle = 2*(w+h)
    double width , height ,result;

    scanf("%lf",&width);
    scanf("%lf",&height);

    result = 2 * (width + height);

    printf("Perimeter of rectangle = %.4lf units",result);

    return 0;

}