#include <stdio.h>

int main()
{

    unsigned int myNumbers[5],index;
    int i;
    
    for (i = 0 ; i < 5 ; i++)
    {
        scanf("%u",&myNumbers[i]);
    }

    scanf("%u",&index);

    printf("Value at index %d is %u",index,myNumbers[index]);


    return 0;
    
}