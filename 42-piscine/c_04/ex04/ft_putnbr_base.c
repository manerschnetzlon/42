/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:14:45 by mschnetz          #+#    #+#             */
/*   Updated: 2022/02/10 11:00:13 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	char_is_whitespace(char c)
{
	if (c == 32 || c == 12 || c == 10 || c == 13 || c == 9 || c == 11)
		return (1);
	return (0);
}

int	count_base(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || char_is_whitespace(base[i]))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base [i] == base [j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	counter_base;
	unsigned int	i;

	counter_base = count_base(base);
	if (!counter_base)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		i = -nbr;
	}
	else
		i = nbr;
	if (i >= counter_base)
	{
		ft_putnbr_base(i / counter_base, base);
	}
	ft_putchar(base[i % counter_base]);
}
