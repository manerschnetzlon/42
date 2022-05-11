/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:53:29 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:46:39 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*c_found;
	int		i;

	str = (char *)s;
	if (c == '\0')
		return (&(str[ft_strlen(str)]));
	i = 0;
	c_found = NULL;
	while (str[i])
	{
		if (str[i] == (char)c)
			c_found = (char *)&(str[i]);
		i++;
	}
	return (c_found);
}

/* int	main()
{
	char s1[] = "Hello World!";
	char s2[] = "qweryuiopasdfghjklzxcvbnm78945612";
	char s3[] = "			 q";
	char s4[] = "tripouille";
	
	printf("1. ");
	printf(ft_strrchr(s1, 'a') == strrchr(s1, 'a') ? "OK\n" : "KO\n");
	printf("ft_strrchr(s1, 'a') = %s\n", ft_strrchr(s1, 'a'));
	printf("strrchr(s1, 'a') = %s\n\n", strrchr(s1, 'a'));

	printf("2. ");
	printf(ft_strrchr(s1, 'l') == strrchr(s1, 'l') ? "OK\n" : "KO\n");
	printf("ft_strrchr(s1, 'l') = %s\n", ft_strrchr(s1, 'l'));
	printf("strrchr(s1, 'l') = %s\n\n", strrchr(s1, 'l')); 
	
	printf("3. ");
	printf(ft_strrchr(s2, ' ') == strrchr(s2, ' ') ? "OK\n" : "KO\n");
	printf("ft_strrchr(s2, ' ') = %s\n", ft_strrchr(s2, ' '));
	printf("strrchr(s2, ' ') = %s\n\n", strrchr(s2, ' '));

	printf("4. ");
	printf(ft_strrchr(s2, 0) == strrchr(s2, 0) ? "OK\n" : "KO\n");
 	printf("ft_strrchr(s2, 0) = %s\n", ft_strrchr(s2, 0));
	printf("strrchr(s2, 0) = %s\n\n", strrchr(s2, 0));

	printf("5. ");
	printf(ft_strrchr(s3, ' ') == strrchr(s3, ' ') ? "OK\n" : "KO\n");
	printf("ft_strrchr(s3, ' ') = %s\n", ft_strrchr(s3, ' '));
	printf("strrchr(s3, ' ') = %s\n\n", strrchr(s3, ' '));

	printf("6. ");
	printf(ft_strrchr(s4, 0) == strrchr(s4, 0) ? "OK\n" : "KO\n");
	printf("ft_strrchr(s4, 0) = %s\n", ft_strrchr(s4, 0));
	printf("strrchr(s4, 0) = %s\n\n", strrchr(s4, 0));

	printf("7. ");
	printf(ft_strrchr(s4, 't' + 256) == strrchr(s4, 't' + 256) ? "OK\n" : "KO\n");
	printf("'t' + 256 = %d ('%c') \n", ('t' + 256), ('t' + 256));
	printf("ft_strrchr(s4, 't' + 256) = %s\n", ft_strrchr(s4, 't' + 256));
	printf("strrchr(s4, 't' + 256) = %s\n\n", strrchr(s4, 't' + 256));
} */