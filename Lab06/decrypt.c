#include <stdio.h>
#include <ctype.h>

int main()
{

    char alpha[27] = "rmncedkljoshtufvzgwiabxypq";
    char text[201];
    int lower = 0;
    

    scanf("%[^\n]",text);

    int sum ;

    for (int i = 0 ; i < 201 ; i++)
    {
        if (text[i] == '\0')
        {
            sum = i;
            break;
        }

    }

    for(int i = 0 ; i < sum ; i++)
    {

        if( text[i] == ' ') // if space continue
        {
            printf(" ");
            continue;
        }
        if(text[i] >= 97 && text[i] <= 122) // check if is lower or upper when output will same with OG
        {
            lower = 1;
        }
        else
        {
            lower = 0;
        }

        for(int j = 0; j < 26;j++) // to replace that index which other alaphabet
        {
            if (tolower(text[i]) == alpha[j])
            {
                if (lower)
                {
                    printf("%c",alpha[(j+5)%26]);
                }
                else
                {
                    printf("%c",toupper(alpha[(j+5)%26]));
                }
                break;
            }

        }
    }

    return 0;
}