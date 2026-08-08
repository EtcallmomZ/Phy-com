#include <stdio.h>

int main()
{
    char text[101];
    int count;

    scanf("%[^\n]",text);

    for (int i = 0 ;i < 101 ; i++ )
    {
        if(text[i] == '\0')
        {
            count = i;
            break;
        }
    }

    for (int i = count-1 ; i >= 0 ;i--)
    {
        printf("%c",text[i]);
    }


    return 0;
}