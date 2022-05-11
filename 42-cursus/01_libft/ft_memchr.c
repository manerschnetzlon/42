/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:36:47 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:30:31 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

/* int	main()
{
	char	s1[] = "Hello world!";
	int		c1 = 108; // l
	char	s1_2[] = "Hello world!";
	int		c1_2 = 108; // l

	char	s2[] = "Hello world!";
	int		c2 = 114; // r
	char	s2_2[] = "Hello world!";
	int		c2_2 = 114; // r

	char	s3[] = "Hello world!";
	int		c3 = 48; // 0
	char	s3_2[] = "Hello world!";
	int		c3_2 = 48; // 0

	printf("ft_memchr : %s\n", (char *)ft_memchr(s1, c1, 7));
	printf("memchr : %s\n\n", (char *)ft_memchr(s1_2, c1_2, 7));
	printf("ft_memchr : %s\n", (char *)ft_memchr(s2, c2, 20));
	printf("memchr : %s\n\n", (char *)ft_memchr(s2_2, c2_2, 20));
	printf("ft_memchr : %s\n", (char *)ft_memchr(s3, c3, 7));
	printf("memchr : %s\n\n", (char *)ft_memchr(s3_2, c3_2, 7));
} */