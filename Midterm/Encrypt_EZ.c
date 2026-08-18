#include <stdio.h>
#include <ctype.h>

int main()
{
   char text[201] , new_text[101];
   char alpha[27] = "qpayxbaiwgzvfuthsojlkdecnmr";
   int is_lower = 0;
   

   scanf("%[^\n]",text);
   int sum = 0;

   for (int i = 0 ; i < 201;i++)
   {
    if (text[i] == '\0')
    {
        sum = i;
        break;
    }
   }

   for (int i = 0 ; i < sum ;i++)
   {
    if(text[i] == ' ')
    {
        printf(" ");
        continue;
    }

    if( 97 <= text[i] && text[i] <= 122 )
    {
        is_lower = 1;
    }
    else
    {
        is_lower = 0;
    }

    for(int j = 0 ; j < 26 ; j++)
    {
        if(tolower(text[i]) == alpha[j])
        {
            if (is_lower)
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