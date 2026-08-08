#include <stdio.h>

int main()
{
    float A[3][3];
    int i,j;
    int scalar = 1;

    for(i = 0 ; i < 3;i++)
    {
        for(j = 0 ; j<3;j++)
        {
            scanf("%f",&A[i][j]); 
        }
    }

    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            if (i==j)
            {
                if (A[i][j] != A[0][0])
                {
                    scalar = 0;
                }
            }
            else
            {
                if (A[i][j] != 0)
                {
                    scalar = 0;
                }
            }
        }
    }

    if (scalar)
    {
        printf("This is a scalar matrix");
    }
    else
    {
        printf("This is not a scalar matrix");
    }

    
    return 0;
}