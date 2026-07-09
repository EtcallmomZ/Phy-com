#include <stdio.h>

int main()
{
    char fname1[30];
    char sname1[30];
    char person2[100];
    char person3[100];

    scanf("%s",fname1);
    scanf("%s",sname1);
    //getchar() use for clear a buffer(/n) from keyboard record like (Hello\n) , method for input char
    getchar();
    // %[^\n] use when you want to use space bar for input (because %s when find a spacebar will stop to read)
    scanf("%[^\n]",person2); 
    getchar();
    scanf("%[^\n]",person3);

    printf("Person 1: %s %s\n",fname1,sname1);
    printf("Person 2: %s\n",person2);
    printf("Person 3: %s\n",person3);

    return 0;
}