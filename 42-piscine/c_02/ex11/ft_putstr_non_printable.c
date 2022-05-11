/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:13:07 by mschnetz          #+#    #+#             */
/*   Updated: 2022/02/09 09:39:00 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	set_table_hexa(char	*table_hexa)
{
	int		j;
	char	c;

	j = 0;
	c = '0';
	while (j <= 9)
	{
		table_hexa[j] = c;
		c++;
		j++;
	}
	c = 'a';
	while (j < 16)
	{
		table_hexa[j] = c;
		c++;
		j++;
	}
	table_hexa[j] = '\0';
}

void	ft_putstr_non_printable(char *str)
{
	char			table_hexa[17];
	unsigned int	i;
	unsigned char	c;

	i = 0;
	set_table_hexa(table_hexa);
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 32 && c <= 126)
			ft_putchar(c);
		else
		{
			ft_putchar('\\');
			ft_putchar(table_hexa[c / 16]);
			ft_putchar(table_hexa[c % 16]);
		}	
		i++;
	}	
}
