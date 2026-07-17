#include <stdio.h>

int main()
{
    int input,day , hour , min , sec;

    scanf("%d",&input);

    day = input / 86400;
    hour = (input - (day *(24*3600)))/3600;
    min = (input % 3600)/60;
    sec = input % 60;
    
    printf("%d s = %d d %d h %d m %d s",input,day,hour,min,sec);

    return 0;

}