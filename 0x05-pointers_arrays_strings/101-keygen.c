include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

/**
 * main - Creates a random password for the file 101-crackme
 * Return: Always 0.
 */
int main(void)
{
    char passwd [90];
    int i;
    int n = 0;
    
    srand(time(0));
    
    for(i = 0; n <= 2772 - 125; i++)
    {
	passwd[i] =  (rand() % (125 - 32 + 1)) + 32;
	n = n + passwd[i];
    }
    
    passwd[i] = 2772 - n;
    passwd[i + 1] = '\0';

    printf("%s", passwd);
    
    return (0);
}
