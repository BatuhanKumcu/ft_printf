#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

static void	print_return_values(int ft_ret, int printf_ret)
{
	printf("ft_printf return: %d\n", ft_ret);
	printf("printf return   : %d\n", printf_ret);
	printf("-----------------------------\n");
}

int	main(void)
{
	int		ft_ret;
	int		printf_ret;
	int		nbr;
	char	*str;
	void	*ptr;

	nbr = 42;
	str = "hello";
	ptr = &nbr;
	ft_ret = ft_printf("char: [%c]\n", 'A');
	printf_ret = printf("char: [%c]\n", 'A');
	print_return_values(ft_ret, printf_ret);
	ft_ret = ft_printf("string: [%s]\n", str);
	printf_ret = printf("string: [%s]\n", str);
	print_return_values(ft_ret, printf_ret);
	ft_ret = ft_printf("null string: [%s]\n", NULL);
	printf_ret = printf("null string: [%s]\n", NULL);
	print_return_values(ft_ret, printf_ret);
	ft_ret = ft_printf("int: [%d] [%i] [%d]\n", 0, -42, INT_MIN);
	printf_ret = printf("int: [%d] [%i] [%d]\n", 0, -42, INT_MIN);
	print_return_values(ft_ret, printf_ret);
	ft_ret = ft_printf("uint: [%u] [%u]\n", 0, UINT_MAX);
	printf_ret = printf("uint: [%u] [%u]\n", 0, UINT_MAX);
	print_return_values(ft_ret, printf_ret);
	ft_ret = ft_printf("hex lower: [%x] [%x]\n", 0, 3735928559u);
	printf_ret = printf("hex lower: [%x] [%x]\n", 0, 3735928559u);
	print_return_values(ft_ret, printf_ret);
	ft_ret = ft_printf("hex upper: [%X] [%X]\n", 0, 3735928559u);
	printf_ret = printf("hex upper: [%X] [%X]\n", 0, 3735928559u);
	print_return_values(ft_ret, printf_ret);
	ft_ret = ft_printf("pointer: [%p]\n", ptr);
	printf_ret = printf("pointer: [%p]\n", ptr);
	print_return_values(ft_ret, printf_ret);
	ft_ret = ft_printf("null pointer: [%p]\n", NULL);
	printf_ret = printf("null pointer: [%p]\n", NULL);
	print_return_values(ft_ret, printf_ret);
	ft_ret = ft_printf("percent: [%%]\n");
	printf_ret = printf("percent: [%%]\n");
	print_return_values(ft_ret, printf_ret);
	ft_ret = ft_printf("mixed: %c %s %d %u %x %X %p %%\n",
			'Z', "test", -123, 123u, 255u, 255u, ptr);
	printf_ret = printf("mixed: %c %s %d %u %x %X %p %%\n",
			'Z', "test", -123, 123u, 255u, 255u, ptr);
	print_return_values(ft_ret, printf_ret);
	return (0);
}
