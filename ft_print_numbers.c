/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakumcu <bakumcu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:12:18 by bakumcu           #+#    #+#             */
/*   Updated: 2026/02/08 16:57:24 by bakumcu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putn(char c)
{
	write(1, &c, 1);
}

static int	ft_len_number(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_put_number(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putn('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_put_number(nb / 10);
		ft_putn(nb % 10 + 48);
	}
	else
		ft_putn(nb + 48);
}

int	ft_putnbr(int n)
{
	ft_put_number(n);
	return (ft_len_number(n));
}