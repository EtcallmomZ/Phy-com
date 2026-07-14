#include <stdio.h>

int main()
{

    int hour,miniute;
    char time[5];

    scanf("%d",&hour);
    scanf("%d",&miniute);

    sprintf(time,"%02d:%02d",hour,miniute);

    printf("%s",time);



    return 0;
}