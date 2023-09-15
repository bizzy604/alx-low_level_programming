#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int kev;
	char *str;
	va_list my_list;

	va_start(my_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(my_list, int));
				kev = 0;
				break;
			case 'i':
				printf("%i", va_arg(my_list, int));
				kev = 0;
				break;
			case 'f':
				printf("%f", va_arg(my_list, double));
				kev = 0;
				break;
			case 's':
				str = va_arg(my_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				kev = 0;
				break;
			default:
				kev = 1;
				break;
		}
		if (format[i + 1] != '\0' && kev == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(my_list);
}
