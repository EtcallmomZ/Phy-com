#include <stdio.h>

int main()
{
    char type;
    float acc_money , my_money;

    float money;

    int sum = 0;

    scanf("%f",&acc_money);
    scanf("%f",&my_money);

    while ((type != 'E') && (sum < 3))
    {
        scanf("%c %f",&type,&money);

        if(type == 'D')
            if(money > my_money)
            {
                sum++;
            }
            else{
                acc_money += money;
                my_money -= money;
                sum = 0;
            }
    

        else if (type == 'W')
        {
            if(money > acc_money)
            {
                sum++;
            }
            else{
                acc_money -= money;
                my_money += money;
                sum = 0;
            }
        }

    }
    printf("%.2f\n",acc_money);
    printf("%.2f\n",my_money);


    return 0;
}