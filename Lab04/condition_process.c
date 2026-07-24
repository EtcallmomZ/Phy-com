#include <stdio.h>

int main()
{
    int num1,num2;
    
    scanf("%d %d",&num1,&num2);
    int sum = num1 + num2;
    int diff = num1 - num2;

    if (num1 == num2)
    {
        printf("%d + %d = %d",num1,num2,sum);
    }
    else{
        printf("%d - %d = %d",num1,num2,diff);
    }
    
    return 0;
}