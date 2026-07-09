#include <stdio.h>

int main()
{
    char num[5];

    scanf("%s",num);
    // 0 1 2 3 4 
    printf("%c%c%c%c%c",num[2],num[3],num[4],num[0],num[1]);
    return 0;
}