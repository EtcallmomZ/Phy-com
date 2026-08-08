#include <stdio.h>
#include <ctype.h>

int main()
{
    char text[101] , new_text[101];
    int sum,is_palindrom = 0;

    scanf(" %s",text);
 

    // check size 
    for(int i = 0 ; i < 101;i++)
    {
        if(text[i] == '\0')
        {
            sum = i;
            break;
        }

    }
    // reverse word

    for (int i = sum - 1 ; i>= 0 ; i--)
    {
            new_text[i] = text[(sum-1)-i];
    }

    // check if is palindrom

    for(int i = 0 ; i < sum ; i++)
    {
        if(text[i] == new_text[i])
        {
           is_palindrom++;
        }
        else
        {
            continue;
        }
    }
    //output ja

    if (is_palindrom == sum)
    {
        printf("It is Palindrome.\n");
    }
    else
    {
        printf("It is not Palindrome.\n");
    }
    return 0;
}
