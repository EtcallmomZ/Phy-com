#include <stdio.h>

int main()
{
    double s_accel,s_cruis,t_accel,t_cruise,result;
    int start,destination;

    
    scanf("%d %d", &start ,&destination);


    s_accel =  (1.5*1.5) / (2 * 0.5);
    t_accel = 1.5 / 0.5;


    double pos_start, pos_end;

        if (start > 1) {
        pos_start = 6.0 + (4.0 * (start - 2));
    } else {
        pos_start = 0.0;
    }

    if (destination > 1) {
        pos_end = 6.0 + (4.0 * (destination - 2));
    } else {
        pos_end = 0.0;
    }
    
    double Stotal = pos_end - pos_start;

    if (Stotal < 0) {
        Stotal = -Stotal;
    }
    
    s_cruis = Stotal - (2 * s_accel);
    t_cruise = s_cruis / 1.5;

    result = t_accel + t_cruise + t_accel;

    printf("%.2lf",result);

    return 0;
}