#include "main.h"

/**
  *_isalpha - alpha
  *@c: Int
  *Return: is alpha?
  */
int _isalpha(int c)
{
	int i;
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 52; i++)
	{
		if (alp[i] == c)
		{
		return (1);
		}
	}
	return (0);
}
