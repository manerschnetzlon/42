/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:39:44 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:33:00 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}

/* int	main(void)
{
	#include <stdio.h>

	char s1_1[] = "Hello world!";
	char s1_2[] = "Hello world!";

	char s2_1[] = "qweryuiopasdfghjklzxcvbnm78945612";
	char s2_2[] = "qweryuiopasdfghjklzxcvbnm78945612";

	ft_memset(s1_1, 'a', 3);
	memset(s1_2, 'a', 3);
	ft_memset(s2_1, 'a', 3);
	memset(s2_2, 'a', 3);

	printf("%s\n", s1_1);
	printf("%s\n\n", s1_2);
	printf("%s\n", s2_1);
	printf("%s\n\n", s2_2);
} */