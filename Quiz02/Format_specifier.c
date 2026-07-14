#include <stdio.h>

int main()
{
    int num1;
    float num2;
    char str1;
    char str2[20];

    scanf("%d",&num1);
    scanf("%f",&num2);
    scanf(" %c",&str1);
    scanf("%s",str2);

    printf("Integer: %d\n",num1);
    printf("Float: %.3f\n",num2);
    printf("Character: %c\n",str1);
    printf("String: %s\n",str2);

      
    return 0;
}