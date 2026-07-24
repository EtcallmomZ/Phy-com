#include <stdio.h>

int main()
{
    double km;
    
    scanf("%lf", &km);

    
    if (km >= 0 && km <= 58.855)
    {
        if (km > 52.900)
        {
            printf("Chon Buri");
        }
        else if (km > 35.477)
        {
            printf("Chachoengsao");
        }
        else if (km > 5.032)
        {
            printf("Samut Prakarn");
        }
        else
        {
            printf("Bangkok");
        }
    }
    else
    {
        printf("InValid");
    }


    return 0;
}