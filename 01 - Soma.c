/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main()
// {
    
//     int INDICE = 13, SOMA = 0, K = 0;

//     while (K < INDICE)
//     {
    
//         K = K + 1;
    
//         SOMA = SOMA + K;
    
//     }

//     printf("SOMA: %d", SOMA);
    
//     return 0;
// }

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
