#include <stdio.h>

int main()
{
    float A[3][3] ,B[3][3] , C[3][3];
    int i,j,k;

    for(i = 0 ; i < 3;i++)
    {
        for(j = 0 ; j<3;j++)
        {
            // Array not string type still have to add "&"
            scanf("%f",&A[i][j]); 
        }
    }

     for(i = 0 ; i < 3;i++)
    {
        for(j = 0 ; j<3;j++)
        {
            scanf("%f",&B[i][j]); 
        }
    }

    for(i = 0;i < 3; i++)
    {
        for (j =0 ; j < 3 ; j++)
        {
            C[i][j] = 0;
            for (k = 0 ; k < 3 ; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("A x B\n");

    for(i=0; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("%.2f ",C[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}