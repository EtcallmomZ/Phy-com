#include <stdio.h>
int main()
{
	char input1[30];
	char input2[30];
	char input3[30];
	char input4[30];

	scanf("%s",input1);
    scanf("%s",input2);
 	scanf("%s",input3);
 	scanf("%s",input4);


	printf("String 1: %.*s\n",3,input1);
	printf("String 2: %.*s\n",4,input2);
	printf("String 3: %.*s\n",5,input3);
    printf("String 4: %.*s",6,input4);

	return 0;
}
