#include <stdio.h>

int main()
{

    int M[8] = {2, 20, 8, 10, 4, 6, 16, 18} , N[7] = {1, 3, 9, 7, 11, 15, 19};

    int n,check;

    check = 0;
    
    scanf("%d",&n);

    while (n < 1 || n > 20)
    {
        scanf("%d",&n);
    }
    
    for (int i = 0 ; i < 8 ; i++)
    {
        if (M[i] == n)
        {
            printf("%d is in M at index [%d]",M[i],i);
            check ++;
        }
    }

    for (int i = 0 ; i < 7 ; i++)
    {
        if (N[i] == n)
        {
            printf("%d is in N at index [%d]",N[i],i);
            check ++;
        }
    }

    if (check == 0)
    {

        printf("%d is not in neither M nor N",n);

    }


    return 0;
}
