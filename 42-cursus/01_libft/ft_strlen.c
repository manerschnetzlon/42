/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:44:01 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:38:01 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* int	main(void)
{
	#include <string.h>
	#include <stdio.h>
	
	printf("ft_strlen 'test': %ld\n", ft_strlen("test"));
	printf("strlen 'test': %ld\n\n", strlen("test"));

	printf("ft_strlen 'abcdefghijkl;nopqrstuvwxyz': %ld\n", \
		ft_strlen("abcdefghijkl;nopqrstuvwxyz"));
	printf("strlen 'abcdefghijkl;nopqrstuvwxyz': %ld\n\n", \
		strlen("abcdefghijkl;nopqrstuvwxyz"));

	printf("ft_strlen '48': %ld\n", ft_strlen("48"));
	printf("strlen '48': %ld\n\n", strlen("48"));

	printf("ft_strlen 'a': %ld\n", ft_strlen("a"));
	printf("strlen 'a': %ld\n\n", strlen("a"));
}  */