/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:25:30 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:46:07 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n <= 0)
		return (0);
	i = 0;
	while (i < (n - 1) && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* int	main()
{
	char s1[] = "Hello World!";
	char s2[] = "Hello World!";
	char s3[] = "Hello";
	char s4[] = "Helloaaaaaaaaaa";
	char s5[] = "qweryuiopasdfghjklzxcvbnm78945612";
	char s6[] = "			 q";
	
	printf("1. ");
	printf(ft_strncmp(s1, s2, 11) == strncmp(s1, s2, 11) ? "OK\n" : "KO\n");
	printf("ft_strncmp : %d\n", ft_strncmp(s1, s2, 11));
	printf("strncmp : %d\n\n", strncmp(s1, s2, 11));

	printf("2. ");
	printf(ft_strncmp(s1, s2, 120) == strncmp(s1, s2, 120) ? "OK\n" : "KO\n");
	printf("ft_strncmp : %d\n", ft_strncmp(s1, s2, 120));
	printf("strncmp : %d\n\n", strncmp(s1, s2, 120));
	
	printf("3. ");
	printf(ft_strncmp(s2, s3, 5) == strncmp(s2, s3, 5) ? "OK\n" : "KO\n");
	printf("ft_strncmp : %d\n", ft_strncmp(s2, s3, 5));
	printf("strncmp : %d\n\n", strncmp(s2, s3, 5));

	printf("4. ");
	printf(ft_strncmp(s2, s3, 10) > 0 && strncmp(s2, s3, 10) > 0 ? "OK\n" : "KO\n");
	printf("ft_strncmp : %d\n", ft_strncmp(s2, s3, 10));
	printf("strncmp : %d\n\n", strncmp(s2, s3, 10));

	printf("5. ");
	printf(ft_strncmp(s3, s4, 6) < 0 && strncmp(s3, s4, 6) < 0 ? "OK\n" : "KO\n");
	printf("ft_strncmp : %d\n", ft_strncmp(s3, s4, 6));
	printf("strncmp : %d\n\n", strncmp(s3, s4, 6));

	printf("6. ");
	printf(ft_strncmp(s4, s5, 6) < 0 && strncmp(s4, s5, 6) < 0 ? "OK\n" : "KO\n");
	printf("ft_strncmp : %d\n", ft_strncmp(s4, s5, 6));
	printf("strncmp : %d\n\n", strncmp(s4, s5, 6));

	printf("7. ");
	printf(ft_strncmp(s6, s5, 6) < 0 && strncmp(s6, s5, 6) < 0 ? "OK\n" : "KO\n");
	printf("ft_strncmp : %d\n", ft_strncmp(s6, s5, 6));
	printf("strncmp : %d\n\n", strncmp(s6, s5, 6));

	printf("8. ");
	printf(ft_strncmp(s6, s5, 0) == strncmp(s6, s5, 0) ? "OK\n" : "KO\n");
	printf("ft_strncmp : %d\n", ft_strncmp(s6, s5, 0));
	printf("strncmp : %d\n\n", strncmp(s6, s5, 0));

	printf("9. ");
	printf(ft_strncmp("test\200", "test\0", 6) == \
	strncmp("test\200", "test\0", 6) ? "OK\n" : "KO\n");
	printf("ft_strncmp : %d\n", ft_strncmp("test\200", "test\0", 6));
	printf("strncmp : %d\n\n", strncmp("test\200", "test\0", 6));
} */