#include <stdio.h>

int main()
{
    float height,kg,bmi;

    scanf("%f",&height);
    scanf("%f",&kg);
    
    height = height / 100;
    bmi = kg / (height*height);

    printf("%f",bmi);

    return 0;

}