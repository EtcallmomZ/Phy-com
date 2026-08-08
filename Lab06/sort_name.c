#include <stdio.h>
#include <ctype.h>

int main()
{
    char name[20][61];

    for(int i = 0 ; i < 20 ; i++)
    {
        scanf(" %[^\n]",name[i]); 
        // put a space before cause skip \n (don't foreget is important)
    }

    for (int i = 0 ; i < 20 ; i++)
    {
        for (int j = 0 ; name[i][j] != '\0'; j++)
        {
            if (j == 0 || name[i][j-1] == ' ')
            {
                name[i][j] = toupper(name[i][j]);
            }
            else{
                name[i][j] = tolower(name[i][j]);
            }

        }
    }


    //A-Z use ascii to help in this problem , we comparrision them 
    

    char temp[61]; // for copy sentence

    for(int i = 0 ; i < 20-1 ; i ++) // i is where name one is
    {
        for (int j = i+1 ; j < 20 ; j++) // j is where name two is
        {

            int k = 0; // for index to check in that sentence
            while ((name[i][k] != '\0') && name[j][k] != '\0')
            {

                // if index 1 more than index2 we have to convert index
                if (name[i][k] > name[j][k])
                {
                    int m = 0; // index for character in name
                    while(name[i][m] != '\0') // for copy index 1 to temp array
                    {
                        temp[m] = name[i][m];
                        m++;
                    }
                    temp[m] = '\0'; // to tell this sentence have over because old senctence have more index than new one

                    m = 0;
                    while (name[j][m] != '\0') // for convert index 2 to index1 (swap it)
                    {
                        name[i][m] = name[j][m];
                        m ++;
                    }
                    name[i][m] = '\0';

                    m = 0 ;
                    while(temp[m] != '\0') // temp have a copy of index 1 and replace it into index2
                    {
                        name[j][m] = temp[m];
                        m++;
                    }
                    name[j][m] = '\0';

                    break;
                }
                else if (name[i][k] < name[j][k])
                {
                    break;
                }
                k++ ; // plus for check in another index
            }
        }
    }

    for(int i = 0 ; i < 20 ; i++)
    {
        printf("%s\n",name[i]);
    }

   /* I don't want to do it anymoreeeeeeeeeeeeeee T-T */ 

    return 0;
}