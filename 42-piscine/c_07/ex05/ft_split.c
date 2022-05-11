/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:26:47 by mschnetz          #+#    #+#             */
/*   Updated: 2022/02/24 10:13:21 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_char_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	if (!ft_char_is_sep(str[i], charset))
		counter++;
	while (str[i])
	{
		if (ft_char_is_sep(str[i], charset) && str[i + 1] != '\0'
			&& (!ft_char_is_sep(str[i + 1], charset)))
			counter++;
		i++;
	}
	return (counter);
}

int	ft_length_bw_sep(char *str, char *charset)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (ft_char_is_sep(str[i], charset))
			return (i);
		i++;
	}
	return (i);
}

void	ft_strncpy(char	*dest, char *src, int n)
{
	int	i;

	i = -1;
	while (++i < n)
		dest[i] = src[i];
	dest[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	int		count;
	int		length;
	char	**tab;
	char	*t;
	int		i;

	count = ft_count_words(str, charset);
	tab = (char **)malloc(sizeof(char *) * (count + 1));
	i = -1;
	while (++i < count)
	{
		while (ft_char_is_sep(str[0], charset))
			str++;
		if (str[0] && !ft_char_is_sep(str[0], charset))
		{
			length = ft_length_bw_sep(str, charset);
			t = (char *)malloc(sizeof(char) * (length + 1));
			ft_strncpy(t, str, length);
			tab[i] = t;
			str += length;
		}		
	}
	tab[count] = 0;
	return (tab);
}
