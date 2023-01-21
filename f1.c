#include <stdlib.h>
#include<unistd.h>
#include <stdarg.h>


/**
 * _putchar - prints a single character to the stdout
 * @c: A character to print to the stdout
 *
 * Return: A status code.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _printf - A function that behaves as printf
 * @format: A string of what to print
 *
 * Return: The number of printed characters
 */

int _printf(const char *format, ...)
{
	int i, j;
	char *s;
	va_list args;

	va_start(args, format);
	i = 0;
	if (format == NULL)
		return (0);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
		}
		else
		{
			i++;
			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(args, int));
					break;
				case 's':
					s = va_arg(args, char *);
					for (j = 0; s[j]; j++)
						_putchar(s[j]);
					break;
				case '%':
					_putchar('%');
					break;
			}
			i++;
		}
	}
	va_end(args);
	return (i - 1);
}
