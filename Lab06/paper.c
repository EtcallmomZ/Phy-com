#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*  
    I see something about this problem the output will be 2^n 
    A0 => A0 = 1  -> 2^0
    A0 => A1 = 2  -> 2^1
    A0 => A2 = 4  -> 2^2
    A0 => A3 = 8  -> 2^3
    A0 => A4 = 16 -> 2^4
    A0 => A5 = 32 -> 2^5
    */

    char x[4] , y[4];

    scanf("%s",x);
    scanf(" %s",y);

    int combined_x = atoi(&x[1]); //atoi(&x[1]) mean we will combined since index 1
    int combined_y = atoi(&y[1]);

    // find difference between x and y
    //convert str to int
    
    int round = combined_y-combined_x;

    printf("%.0f",pow(2,round));

    return 0;
}