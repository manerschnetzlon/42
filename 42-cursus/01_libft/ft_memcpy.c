/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:43:18 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:31:56 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (src != dst)
	{
		i = 0;
		while (i < n)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/* int	main(void)
{
	char s1[] = "Hello world!";
	char s2[] = "qweryuiopasdfghjklzxcvbnm78945612";
	char s3[] = "        ";

	printf("s1 & s2 (3chars): ");
	printf(strcmp(ft_memcpy(s1, s2, 3), \
		memcpy(s1, s2, 3)) == 0 ? "OK\n" : "KO\n");
	printf("s1 & s2 (10chars): ");
	printf(strcmp(ft_memcpy(s1, s2, 10), \
		memcpy(s1, s2, 10)) == 0 ? "OK\n" : "KO\n");
	printf("s3 & s1 (5chars): ");
	printf(strcmp(ft_memcpy(s3, s1, 5), memcpy(s3, s1, 5)) == 0 ? "OK\n" : "KO\n");
} */