#include <stdio.h>
#include <stdlib.h>
 
 
int main() {
    char *str = (char*) malloc(sizeof(char) * 101);
    scanf("%[^\n]",str);
 
    char *p = str;
    while (*p != '\0')
     
        p++;
         
     
    unsigned int length = p-str;
    printf("%u",length);
 
    return 0;
}