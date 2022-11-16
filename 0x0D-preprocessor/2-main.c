#include <stdio.h>
#define NAME __FILE__

/**
 * main - prints the name of the file it was compiled from
 * Return: 0 Always
*/
int main(void)
{
    printf("%s\n", NAME);

    return (0);
}