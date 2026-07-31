#include <stdio.h>

int main()
{
    int m,n;
    int start,end;

    scanf("%d %d",&m,&n);

    start = m;
    end = n;
    
    if (m > n)
    {
        while (start >= end)
        {
            printf("%d ",start);
            start--;
        }
    }
    else
    {
        while (start <= end)
        {
            printf("%d ",start);
            start++;
        }
    }
    
    return 0;
}