#include <stdio.h>
#include <ctype.h>

int main()
{
    int num,count = 0, is_exsited,data[26] = {} ;
    char alpha[26] = {},input ;

    scanf("%d",&num);

    for (int i = 0 ; i < num ; i++)
    {
        scanf(" %c",&input);

        input = tolower(input);
        

        // check if alphabet have existed before we use i to check every member in array
        for(int i = 0; i <= count ; i++)
        {
            if (input == alpha[i])
            {
                is_exsited = 1;
                break;
            }
        }

        // after check if is never existed before we will add it into alpha
        if(!is_exsited)
        {
            /* 
            add new character into alpha and plus a member and in next index 
            ex.alpha[0] => alpha[1] means if program find new character never existed before if will record in next index
            */

            alpha[count++] = input; 
        }

        /* 
        input - 'a' is mean a = 97 we use 97-97 then index will be data[0]++ 
        if we see same alpha agian it will be plus in correct index 
        ex . data[b - 97]++ is will be data[1]++ if program find 'b' again it will be record in correct index 
        data in that will be interger  0,1,2,3,4 depend on how much that character put inside program
        and we have alphabet in english 26 letters but array start from 0 then it would be 0-25 => data[0] - data[25] 
        */

        data[input - 97]++;

        is_exsited = 0; // after check that input we will set is_exsited = 0; because if we not set if will be not add a new alphabet eventhough it new one

        
    }

    // output
    for (int i = 0 ; i < count ; i++)
    {
        printf("%c: %d\n",alpha[i],data[alpha[i]-97]); 
    }
    /* 
    to find a same index of character in data array so we have to use i - 97 to find sum of that character
     because solution say to print an output in the same sequence the way it's input
    */


    return 0;
}