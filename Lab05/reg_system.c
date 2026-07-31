#include <stdio.h>

int main()
{
    int age,num,height,weight;
    int sum1 = 0  ,sum2 = 0 ,sum3 =0,sum4=0;
    int sum_age= 0,avg1 ;
    float sum_height,sum_weight,avg2,avg3;

    for(num = 1 ; num <= 50 ;num++)
    {
        scanf("%d %d %d",&age,&height,&weight);
        sum_age += age;
        sum_height += height;
        sum_weight += weight;

        if (age >= 20 && height >= 160)
        {
            sum1++ ;
        }
        if (age < 20 && (height <= 180 || weight >= 60))
        {
            sum2++;
        }
        if (age >= 30 && (weight >= 40 && weight <= 80))
        {
            sum3++;
        }
        if (age < 40 && (weight < 85 || height <= 200))
        {
            sum4++;
        }

    }

    avg1 = sum_age /50;
    avg2 = sum_height /50.0;
    avg3 = sum_weight /50.0;

    printf("Age >= 20 and Height >= 160: %d \n",sum1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d \n",sum2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d \n",sum3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d \n",sum4);
    printf("Average Age: %d \n",avg1);
    printf("Average Height: %.2f \n",avg2);
    printf("Average Weight: %.2f",avg3);


    return 0;
}