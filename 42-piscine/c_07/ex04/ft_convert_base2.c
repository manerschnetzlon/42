/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:00:06 by mschnetz          #+#    #+#             */
/*   Updated: 2022/02/17 11:46:02 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_str(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	while (str[i])
		i++;
	j = 0;
	while (j < i / 2)
	{
		tmp = str[j];
		str[j] = str[i - 1 - j];
		str[i - 1 - j] = tmp;
		j++;
	}
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || \
				base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_c_is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
