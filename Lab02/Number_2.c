#include <stdio.h>

int main()
{
    char num[5];

    scanf("%5s",num);
    printf("%.1s",num);
    printf("%80.0s",num);
    printf("%1.2s",num);
    printf("%79.0s",num);
    printf("%2.3s",num);
    printf("%78.0s",num);
    printf("%3.4s",num);
    printf("%77.0s",num);
    printf("%4.5s",num);

    return 0;
}