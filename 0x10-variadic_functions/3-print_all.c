#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 */
void print_all(const char *const format, ...)
{
	va_list unknown_list;
	int i = 0;
	int a = 0;
	char *s = NULL;

	va_start(unknown_list, format);

	while (format != NULL && format[i] != '\0')
	{
		a = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(unknown_list, int));
			break;
		case 'i':
			printf("%d", va_arg(unknown_list, int));
			break;
		case 'f':
			printf("%f", va_arg(unknown_list, double));
			break;
		case 's':
			s = va_arg(unknown_list, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		default:
			a = 1;
			break;
		}
		i++;
		if (format[i] != '\0' && a != 1)
			printf(", ");
	}
	printf("\n");
	va_end(unknown_list);
}
