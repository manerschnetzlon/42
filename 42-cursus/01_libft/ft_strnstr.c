/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:43:43 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/04 11:33:27 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < len && little[j] && big[i])
	{
		j = 0;
		while (i + j < len && big[i + j] && big[i + j] == little[j])
			j++;
		if (little[j])
			i++;
	}
	if (little[j])
		return (0);
	return ((char *)&big[i]);
}
