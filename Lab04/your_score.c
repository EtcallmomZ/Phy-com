#include <stdio.h>

int main()
{
    double score;

    scanf("%lf",&score);

    if (80 <= score && score <= 100)
    {
        printf("A");
    }
    else if (70 <= score && score <= 79.99)
    {
        printf("B");
    }
    else if (60 <= score && score <= 69.99)
    {
        printf("C");
    }
    else if (50 <= score && score <= 59.99)
    {
        printf("D");
    }
    else if (0 <= score && score <= 49.99)
    {
        printf("F");
    }
    else{
        printf("Out of Range");
    }

    return 0;
}