#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    double info,sum;

    scanf("%d",&num);

    double mem[num];
    sum = 0;

    for(int i = 0 ; i < num ; i++)
    {
        scanf("%lf",&info);
        mem[i] = info;
        sum += info;
    }
    
    double avg;
    avg = sum / num;

    printf("%.2lf\n",avg);

    double max;

    for(int i = 0 ; i < num ; i++)
    {
       for(int j = i+1 ; j < num ; j++)
       {
        if (mem[i] > mem[j])
        {
            max = mem[i];
            mem[i] = mem[j];
            mem[j] = max;
        }
       }
    }

    double median;

    if (num%2 == 0)
    {
        median = (mem[num/2] + mem[(num/2)-1])/2.0;
    }
    else
    {
        median = mem[num/2];
    }

    printf("%.2lf\n",median);

    double deviatin;

    double xi = 0;

    for(int i = 0 ; i < num ; i++)
    {
        xi += pow((mem[i]-avg),2);
    }

    deviatin = sqrt(xi/num);

    printf("%.2lf",deviatin);

    return 0;
}