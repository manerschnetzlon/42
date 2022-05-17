/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:02:26 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/17 12:06:29 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_type(char *types, char c)
{
	size_t	i;

	i = 0;
	while (types[i])
	{
		if (types[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static void	print_p(unsigned long arg, int *count)
{
	if (arg)
	{
		ft_putstr("0x", count);
		ft_putnbrbase(arg, "0123456789abcdef", count, TRUE);
	}
	else
		ft_putstr("(nil)", count);
}

static void	print_type(va_list args, char t, int *count)
{
	if (t == 'd' || t == 'i')
		ft_putnbrbase(va_arg(args, int), "0123456789", count, FALSE);
	else if (t == 'u')
		ft_putnbrbase(va_arg(args, unsigned int), "0123456789", count, TRUE);
	else if (t == 'x')
		ft_putnbrbase(va_arg(args, unsigned int), \
			"0123456789abcdef", count, TRUE);
	else if (t == 'X')
		ft_putnbrbase(va_arg(args, unsigned int), \
			"0123456789ABCDEF", count, TRUE);
	else if (t == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (t == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (t == 'p')
		print_p(va_arg(args, unsigned long), count);
	else if (t == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;
	int		count;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar(str[i], &count);
		else if (str[i] == '%' && str[i + 1] && \
			is_type("cspdiuxX%", str[i + 1]))
		{
			print_type(args, str[i + 1], &count);
			i++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
