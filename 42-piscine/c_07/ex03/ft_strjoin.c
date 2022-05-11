/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:17:39 by mschnetz          #+#    #+#             */
/*   Updated: 2022/02/22 09:51:24 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_length(int size, char**strs, char *sep)
{
	int	i;
	int	total_length;

	i = 0;
	total_length = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		if (i < size - 1)
			total_length += ft_strlen(sep);
		i++;
	}
	return (total_length);
}

char	*ft_concat(char *new_str, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			new_str[k++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			new_str[k++] = sep[j];
			j++;
		}
		i++;
	}
	new_str[k] = '\0';
	return (new_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;

	if (size <= 0)
	{
		new_str = (char *)malloc(sizeof(char));
		if (new_str == NULL)
			return (NULL);
		new_str[0] = '\0';
	}
	else
	{
		new_str = (char *)malloc(sizeof(char) * \
				(ft_total_length(size, strs, sep) + 1));
		if (new_str == NULL)
			return (NULL);
		new_str = ft_concat(new_str, size, strs, sep);
	}
	return (new_str);
}
