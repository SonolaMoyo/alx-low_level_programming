#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argc
 * @av: argv
 * Return: pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	char *p;
	int c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			c++;
		}
	}
	p = malloc((sizeof(char) * c) + 1 + ac);

	if (p == NULL)
		return (NULL);
	c = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[c] = av[i][j];
			c++;
		}
		p[c] = '\n';
		c++;
	}
	p[c] = '\0';
	return (p);
}
