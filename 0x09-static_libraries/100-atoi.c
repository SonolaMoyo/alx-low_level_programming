#include "main.h"
/**
 * _atoi - Function
 * @s: Pointer
 * Return: Int
 */
int _atoi(char *s)
{
	int i;
	unsigned int n = 0;
	int p = 0;
	int y = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (p == 0 && s[i] == '-')
		{
			y = -1 * y;
		} else if (s[i] <= '9' && s[i] >= '0')
		{
			n = (n * 10) + (s[i] - '0');
			p = 1;
		} else if (p == 1)
		{
			break;
		}
	}
	return (n * y);
}
