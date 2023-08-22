#include "main.h"

/**
 * printf_dec - prints decimal
 * @i: variable
 * Return: number
 */
int printf_dec(int i)
{
	int j, k;
	char *str;

	j = 0;
	k = snprintf(NULL, 0, "%d", i) + 1;
	*str = malloc(sizeof(char) * k);

	if (str == NULL)
	{
		return (0);
	}
	else
	{
		snprintf(str, k, "%d", i);
		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
		free(str);
		return (j);
	}
}
