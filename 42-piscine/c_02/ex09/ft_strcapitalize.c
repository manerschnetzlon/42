/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 09:20:29 by mschnetz          #+#    #+#             */
/*   Updated: 2022/02/09 09:33:08 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_char_is_downcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_uppercase(str[i]) || ft_char_is_downcase(str[i]))
		{
			if (ft_char_is_downcase(str[i]) && (b == 0))
				str[i] -= 32;
			else if (ft_char_is_uppercase(str[i]) && (b == 1))
				str[i] += 32;
			b = 1;
		}
		else if (ft_char_is_numeric(str[i]))
			b = 1;
		else
			b = 0;
		i++;
	}
	return (str);
}
