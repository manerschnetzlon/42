/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:05:18 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 17:45:41 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

/* int	main(void)
{
	#include <stdio.h>
	#include <strings.h>
	#include <string.h>

	char s1_1[] = "Hello world!";
	char s1_2[] = "Hello world!";

	char s2_1[] = "qweryuiopasdfghjklzxcvbnm78945612";
	char s2_2[] = "qweryuiopasdfghjklzxcvbnm78945612";

	char s3_1[] = "        ";
	char s3_2[] = "        ";
	
	ft_bzero(s1_1, 3);
	bzero(s1_2, 3);
	ft_bzero(s2_1, 10);
	bzero(s2_2, 10);
	ft_bzero(s3_1, 5);
	bzero(s3_2, 5);

	printf("s1 : ");
	printf(strcmp(s1_1, s1_2) == 0 ? "OK\n" : "KO\n");
	printf("s2 : ");
	printf(strcmp(s2_1, s2_2) == 0 ? "OK\n" : "KO\n");
	printf("s3 : ");
	printf(strcmp(s3_1, s3_2) == 0 ? "OK\n" : "KO\n");
} */