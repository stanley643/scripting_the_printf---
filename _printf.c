#include "main.h"

/**
 * print_string - fxn prints a string
 * @str: string been printed
 * Return: count
 */
int print_string(char *str)
{
	unsigned int i, count;

	i = 0;
	count = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}

	return (count);
}

/**
 * _printf - the implimented printf function
 * @format: String
 * @...: elipsis
 * Return: Thre number of char
 */
int _printf(const char *format, ...)
{
	unsigned int a, b;
	char *str;
	va_list args;

	a = 0;
	b = 0;

	va_start(args, format);
	for (; format[a] != '\0'; a++)
	{
		if (format[a] == '%')
		{
			switch (format[a + 1])
			{
				case 'c':
					_putchar(va_arg(args, int));
					b++;
					a++;
					break;

				case 's':
					str = va_arg(args, char*);
					b += print_string(str);
					a++;
					break;
				case 'd':
					printf_dec(va_arg(args, int));
					a++;
					break;
				case 'i':
					printf_int(va_arg(args, int));
					a++;
					break;

				default:
					_putchar(format[a + 1]);
					a++;
					b++;
					break;
			}
		}
		else
		{
			_putchar(format[a]);
			b++;
		}
	}
	va_end(args);
	return (b);
}
