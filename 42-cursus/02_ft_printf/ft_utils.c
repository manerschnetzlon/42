/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:18:20 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/17 11:19:40 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_putstr(char *s, int *count)
{
	size_t	i;

	if (!s)
	{
		ft_putstr("(null)", count);
		return ;
	}
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i], count);
		i++;
	}
}

void	ft_putnbrbase(long long n, char *base, int *count, int is_unsigned)
{
	unsigned long long	i;
	unsigned int		base_length;

	base_length = ft_strlen(base);
	if (!is_unsigned && n < 0)
	{
		ft_putchar('-', count);
		i = -n;
	}
	else
		i = n;
	if (i >= base_length)
		ft_putnbrbase(i / base_length, base, count, is_unsigned);
	ft_putchar(base[i % base_length], count);
}
