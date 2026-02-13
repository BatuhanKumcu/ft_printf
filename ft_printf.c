/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakumcu <bakumcu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 13:55:26 by bakumcu           #+#    #+#             */
/*   Updated: 2026/02/13 13:13:38 by bakumcu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>

static int	format_type(va_list *args, char format)
{
	int	result;

	if (format == 'c')
		result = ft_putchar_int((char)va_arg(*args, int));
	else if (format == 's')
		result = ft_putstr(va_arg(*args, char *));
	/*else if (format == 'p')
		result = ft_print_add(va_arg(*args, void *));*/
	else if (format == 'i' || format == 'd')
		result = ft_print_int(va_arg(*args, int));
	else if (format == 'u')
		result = ft_print_uint(va_arg(*args, unsigned int));
	else if (format == 'X')
		result = ft_print_hex(va_arg(*args, unsigned int), "0123456789ABCDEF");
	else if (format == 'x')
		result = ft_print_hex(va_arg(*args, unsigned int), "0123456789abcdef");
	else if (format == '%')
		result = ft_putchar_int('%');
	else
		result = 0;
	return (result);
}
/*
static int check_format(const char format)
{
    if (format == '%')
        return (1);
    return (strchr("cspdiuxX", format) != NULL);
}*/

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	total;
	int	check;

	total = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			check = format_type(&args, *format);
		}
		else
			check = ft_putchar_int(*format);
		if (check == -1)
			return (va_end(args), -1);
		total += check;
		format++;
	}
	va_end(args);
	return (total);
}


int	main(void)
{
	char	str[] = "selamlar";
	ft_printf("%s", str);
}