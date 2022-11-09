#include <stdio.h>
#include <stdlib.h>

int count_words(char *);

/**
 * strtow - splits a string into words
 * @str: Array
 * Return: pointer to pointers of strings
 */
char **strtow(char *str)
{
	char **p = NULL;
	int i, j, nWords, c2, c3;

	c2 = c3 = 0;

	if (str == NULL)
		return (NULL);

	nWords = count_words(str);

	p = malloc(sizeof(char *) * (nWords + 1));

	if (p == NULL || nWords == 0)
		return (NULL);

	for (i = 0; c3 < nWords; i++)
	{
		if (str[i] != ' ' && str[i] != '\0')
		{
			c2++;
		}
		else if (c2 > 0 && (str[i] == ' ' || str[i] == '\0'))
		{
			p[c3] = malloc(sizeof(char) * c2 + 1);

				if (p[c3] == NULL)
				{
					for (j = 0; j < c3; j++)
						free(p[j]);
					free(p);
					return (NULL);
				}

			for (j = 0; j < c2; j++)
			{
				p[c3][j] = str[i - c2 + j];
			}
			p[c3][j] = '\0';
			c3++;
			c2 = 0;
		}
	}
	p[c3 + 1] = NULL;
	return (p);
}

/**
 * count_words - Amount of words in string
 * @str: String to search
 * Return: count of words
 */
int count_words(char *str)
{
	int i, c;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			c++;
	}
	return (c);
}
