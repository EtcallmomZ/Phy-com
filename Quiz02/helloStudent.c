#include <stdio.h>

int main()
{
    char name[40];
    char nickname[20];
    char ID[10];
    char Firstname[20];

    scanf("%[^\n]",name);
    getchar();
    scanf(" %s",nickname);
    scanf("%s",ID);

    sscanf(name,"%s",Firstname);

    printf("Hello World, my name is %s (%s)\n\n",nickname,Firstname);
    printf("Student ID: %s\n",ID);
    printf("Name: %s\n",name);
    printf("Nickname: %s",nickname);

    return 0;
}