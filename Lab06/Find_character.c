#include <stdio.h>
#include <ctype.h>

int main()
{

    char text[301];
    char alpha,ans;
    int count = 0;

    scanf("%[^\n]",text);
    scanf(" %c",&alpha);

    ans = tolower(alpha);


    int position[301];

    for (int i = 0 ; i < 301 ; i++)
    {
        if (tolower(text[i]) == ans)
        {
           position[count] = i++; // i + 1 = position that alphabet are in
           count++;
        }
        
    }

    if(count > 0){
        printf("There is/are %d \"%c\" in the above sentences.\n",count,ans);
        printf("Position: ");
        for(int k = 0 ; k < count ; k++)
        {
            printf("%d",position[k]);
    
            if (k < count - 1)
            {
                printf(", ");
            }
        }
    }
    else
    {
        printf("Not found.");
    }

    return 0;
}