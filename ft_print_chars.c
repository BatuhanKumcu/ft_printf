/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakumcu <bakumcu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 14:39:52 by bakumcu           #+#    #+#             */
/*   Updated: 2026/02/08 14:55:29 by bakumcu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_int(const char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr_int(const char *str)
{
	int	i;
	int	check;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i])
	{
		check = ft_putchar_int(str[i]);
		if (check == -1)
			return (-1);
		i++;
	}
	return (i);
}

int	ft_print(int index, const char *c)
{
	int	len;
	int	result;

	len = 0;
	index--;
	result = 0;
	while (index >= 0)
	{
		result = ft_putchar_int(c[index]);
		if (result == -1)
			return (-1);
		len += result;
		index--;
	}
	return (len);
}
