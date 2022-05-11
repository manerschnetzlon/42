/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:19:30 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:35:29 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	if (c == '\0')
		return (&(str[ft_strlen(str)]));
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (&(str[i]));
		i++;
	}
	return (0);
}

/* int	main()
{
	char s1[] = "Hello World!";
	char s2[] = "qweryuiopasdfghjklzxcvbnm78945612";
	char s3[] = "			 q";
	char s4[] = "tripouille";
	
	printf("1. ");
	printf(ft_strchr(s1, 'a') == strchr(s1, 'a') ? "OK\n" : "KO\n");
	printf("ft_strchr(s1, 'a') = %s\n", ft_strchr(s1, 'a'));
	printf("strchr(s1, 'a') = %s\n\n", strchr(s1, 'a'));

	printf("2. ");
	printf(ft_strchr(s1, 'l') == strchr(s1, 'l') ? "OK\n" : "KO\n");
	printf("ft_strchr(s1, 'l') = %s\n", ft_strchr(s1, 'l'));
	printf("strchr(s1, 'l') = %s\n\n", strchr(s1, 'l')); 
	
	printf("3. ");
	printf(ft_strchr(s2, ' ') == strchr(s2, ' ') ? "OK\n" : "KO\n");
	printf("ft_strchr(s2, ' ') = %s\n", ft_strchr(s2, ' '));
	printf("strchr(s2, ' ') = %s\n\n", strchr(s2, ' '));

	printf("4. ");
	printf(ft_strchr(s2, 0) == strchr(s2, 0) ? "OK\n" : "KO\n");
 	printf("ft_strchr(s2, 0) = %s\n", ft_strchr(s2, 0));
	printf("strchr(s2, 0) = %s\n\n", strchr(s2, 0));

	printf("5. ");
	printf(ft_strchr(s3, ' ') == strchr(s3, ' ') ? "OK\n" : "KO\n");
	printf("ft_strchr(s3, ' ') = %s\n", ft_strchr(s3, ' '));
	printf("strchr(s3, ' ') = %s\n\n", strchr(s3, ' '));

	printf("6. ");
	printf(ft_strchr(s4, 0) == strchr(s4, 0) ? "OK\n" : "KO\n");
	printf("ft_strchr(s4, 0) = %s\n", ft_strchr(s4, 0));
	printf("strchr(s4, 0) = %s\n\n", strchr(s4, 0));

	printf("7. ");
	printf(ft_strchr(s4, 't' + 256) == strchr(s4, 't' + 256) ? "OK\n" : "KO\n");
	printf("'t' + 256 = %d ('%c') \n", ('t' + 256), ('t' + 256));
	printf("ft_strchr(s4, 't' + 256) = %s\n", ft_strchr(s4, 't' + 256));
	printf("strchr(s4, 't' + 256) = %s\n\n", strchr(s4, 't' + 256));
} */