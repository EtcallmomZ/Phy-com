#include <stdio.h>

int main()
{

    char myTexts[101] ;
    int index;
    
    scanf("%[^\n]",myTexts);
    scanf(" %d",&index);

    for (int i = 0 ; i < index ; i++)
    {
        printf("%c",myTexts[i]);

    }
    
    return 0;
    
}