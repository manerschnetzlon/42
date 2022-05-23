/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maner <maner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:53:18 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/23 20:21:43 by maner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_parts(char const *s, char sep)
{
	size_t	i;
	size_t	count;

	i = 0;
	if (*s == '\0' || s[i] == sep)
		count = 0;
	else
		count = 1;
	while (s[i])
	{
		if ((s[i] == sep) && s[i + 1] && !(s[i + 1] == sep))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*part;
	size_t	counter;
	size_t	i;
	size_t	j;

	counter = count_parts(s, c);
	arr = (char **)malloc(sizeof(char *) * (counter + 1));
	i = 0;
	while (i < counter)
	{
		while (*s == c)
			s++;
		j = 0;
		while (s[j] && !(s[j] == c))
			j++;
		part = (char *)malloc(sizeof(char) * (j + 1));
		ft_strlcpy(part, s, (j + 1));
		arr[i] = part;
		s += (j + 1);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

// int	main()
// {
// 	ft_split("", ' ');
// }
