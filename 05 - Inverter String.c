#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *str)
{
    char buffer[150];
    
    int c = 0;
    
    for (int i = strlen(str); i >= 0; i--)
    {
           buffer[c] = str[i - 1];
           c++;
    }

    strcpy(str, buffer);
}


int main()
{
    char string[50] = "string test";
    
    reverse(string);
   
   printf("String invertida: %s \n", string);
    
    return 0;
}
