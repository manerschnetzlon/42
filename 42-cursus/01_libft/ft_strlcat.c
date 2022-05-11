/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:06:15 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:37:17 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	total_length;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j])
		j++;
	if (size <= i)
		return (size + j);
	total_length = i + j;
	j = 0;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (total_length);
}

/* int	main(void)
{
	char s1_1[] = "Hello world!";
	char s1_2[] = "Hello world!";

	char s2_1[] = "qweryuiopasdfghjklzxcvbnm78945612";
	char s2_2[] = "qweryuiopasdfghjklzxcvbnm78945612";
	
	printf("1. ");
	ft_strlcat(s1_1, s2_1, 4);
	strlcat(s1_2, s2_2, 4);
	printf(strcmp(s1_1, s1_2) == 0 ? "OK\n" : "KO\n");
	printf("s1_1: %s\ns1_2: %s\n\n", s1_1, s1_2);

	char s3_1[] = "aaaaaaaaaaaaa";
	char s3_2[] = "aaaaaaaaaaaaa";

	char s4_1[] = "123456";
	char s4_2[] = "123456";

	printf("2. ");
	ft_strlcat(s3_1, s4_1, 2);
	strlcat(s3_2, s4_2, 2);
	printf(strcmp(s3_1, s3_2) == 0 ? "OK\n" : "KO\n");
	printf("s3_1: %s\ns3_2: %s\n\n", s3_1, s3_2);
} */