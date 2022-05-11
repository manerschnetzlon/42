/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:57:48 by mschnetz          #+#    #+#             */
/*   Updated: 2022/02/17 11:46:53 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_rev_str(char *str);

int		ft_check_base(char *base);

int		ft_c_is_in_base(char c, char *base);

int	ft_atoi_base(char *str, char *base)
{
	long long int	nbr;
	int				i;
	int				base_length;
	int				sign;

	i = 0;
	sign = 1;
	nbr = 0;
	base_length = ft_check_base(base);
	if (!base_length)
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_c_is_in_base(str[i], base) != -1)
	{
		nbr = nbr * base_length + ft_c_is_in_base(str[i], base);
		i++;
	}
	return (sign * nbr);
}

int	ft_count_char(int nbr, int base_length)
{
	int	counter;

	if (nbr < 0)
	{
		counter = 2;
		nbr = -nbr;
	}
	else
		counter = 1;
	while (nbr >= base_length)
	{
		nbr /= base_length;
		counter++;
	}
	return (counter);
}

void	ft_itoa(int int_nbr, char *char_nbr, char *base)
{
	unsigned long long	new_nbr;
	unsigned long long	base_length;

	base_length = ft_check_base(base);
	if (int_nbr < 0)
		new_nbr = (long)int_nbr * -1;
	else
		new_nbr = (long)int_nbr;
	if (new_nbr >= base_length)
		ft_itoa(new_nbr / base_length, &char_nbr[1], base);
	char_nbr[0] = base[new_nbr % base_length];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			b_from_length;
	int			b_to_length;
	int			counter_char;
	long long	number_int;
	char		*new_nbr;

	b_from_length = ft_check_base(base_from);
	b_to_length = ft_check_base(base_to);
	if (!b_from_length || !b_to_length)
		return (NULL);
	number_int = ft_atoi_base(nbr, base_from);
	counter_char = ft_count_char(number_int, b_to_length);
	new_nbr = (char *)malloc(sizeof(char) * (counter_char + 1));
	if (new_nbr == NULL)
		return (NULL);
	ft_itoa(number_int, new_nbr, base_to);
	if (number_int < 0)
		new_nbr[counter_char - 1] = '-';
	new_nbr[counter_char] = '\0';
	ft_rev_str(new_nbr);
	return (new_nbr);
}
