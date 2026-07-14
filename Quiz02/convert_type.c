#include <stdio.h>

int main()
{
    int num1;
    float num2;
    char text1;
    
    scanf("%d",&num1);
    scanf("%f",&num2);
    scanf(" %c",&text1);

    float new_num = (float)num1;
    int new_float = num2;
    printf("%.3f\n",new_num);
    printf("%d\n",new_float);
    printf("%d",text1);

    return 0;
}