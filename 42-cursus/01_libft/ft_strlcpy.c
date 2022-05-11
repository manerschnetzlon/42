/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:33:12 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:37:41 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (size != 0)
	{
		while (i < (size - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}

/* int	main(void)
{
	char s1_1[] = "Hello world!";
	char s1_2[] = "Hello world!";

	char s2_1[] = "qweryuiopasdfghjklzxcvbnm78945612";
	char s2_2[] = "qweryuiopasdfghjklzxcvbnm78945612";
	
	printf("1. ");
	ft_strlcpy(s1_1, s2_1, 4);
	strlcpy(s1_2, s2_2, 4);
	printf(strcmp(s1_1, s1_2) == 0 ? "OK\n" : "KO\n");

	char s3_1[] = "        ";
	char s3_2[] = "        ";

	char s4_1[] = "123456";
	char s4_2[] = "123456";

	printf("2. ");
	ft_strlcpy(s3_1, s4_1, 140);
	strlcpy(s3_2, s4_2, 140);
	printf(strcmp(s3_1, s3_2) == 0 ? "OK\n" : "KO\n");
} */