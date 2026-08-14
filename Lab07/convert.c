#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str1[102] , new1[102];
    char str2[102] , new2[102];

    scanf("%[^\n]",str1);
    scanf(" %[^\n]",str2);

    int i;
    //convert sentence 1
    for(i = 0 ; str1[i] != '\0' ; i++)
    {
        if (97 <= str1[i]  && str1[i] <= 122)
        {
            new1[i] = toupper(str1[i]);
        }

        else if (65 <= str1[i] && str1[i] <= 90)
        {
            new1[i] = tolower(str1[i]);
        }
        else
        {
            new1[i] = str1[i];
        }

    }
    new1[i] = '\0';
    
    // convert sentence 2    
    for(i = 0 ; str2[i] != '\0' ; i++)
    {
        if (97 <= str2[i]  && str2[i] <= 122)
        {
            new2[i] = toupper(str2[i]);
        }
        
        else if (65 <= str2[i] && str2[i] <= 90)
        {
            new2[i] = tolower(str2[i]);
        }
        else
        {
            new2[i] = str2[i];
        }
        
    }
    new2[i] = '\0';



    // output ja 
    printf("*** Results ***\n");

    for(i = 0 ; i < 102 ; i++)
    {
        if (new1[i] == '\0')
        {
            break;
        }
        printf("%c",new1[i]);

    }
    printf("\n");
    
    for(int i = 0 ; i < 102 ; i++)
    {
        if (new2[i] == '\0')
        {
            break;
        }
        printf("%c",new2[i]);
    }
    printf("\n");
    printf("***************\n");

    
    if(strcasecmp(new1,new2) == 0)
    {
        printf("Both strings are the same.");
    }
    else
    {
        printf("Both strings are not the same.");
    }


   return 0;

    
}