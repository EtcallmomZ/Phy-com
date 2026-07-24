#include <stdio.h>

int main()
{
    double price , discount ,total, result1,result2;
    int percent,num;
    
    scanf("%lf",&price);
    scanf("%d",&percent);
    scanf("%d",&num);

    total = price * num;
    discount = total*(percent/100.0);


    result1 =  total - discount;

    result2 = price*(num-(num/3));


    if (result2 >= result1)
    {
        printf("Discount %d%%\n",percent);
        printf("%.2lf",result1);
        
    }
    else{
        printf("Buy 2 Get 1\n");
        printf("%.2lf",result2);

    }

    

    /* 2=3 
    4 =6 
    6 =9 
    8 =12
    10 = 15
    12 = 17
    14 = 21
    16 = 24
    18 = 27
    20 = 30
    */

    
    return 0;
}