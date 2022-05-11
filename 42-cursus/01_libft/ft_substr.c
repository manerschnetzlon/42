/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:43:51 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:55:45 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*str;

	size = ft_strlen(s);
	if (len > size)
		len = size;
	if (start > size)
		return (ft_strdup(""));
	if (start + len > size)
		len = size - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* int	main()
{
	char *substr;
	substr = ft_substr("tripouille", 0, 42000);
 	printf("1. tripouille : %s\n", substr);
	free(substr);
	
	substr = ft_substr("tripouille", 1, 1);
	printf("2. r : %s\n", substr);
	free(substr);
	
	substr = ft_substr("tripouille", 100, 1);
	printf("3. '' : %s\n",  substr); //
	free(substr);
	
// 	char	str[] = "1"; 
	char	*str = strdup("1");
	substr = ft_substr(str, 42, 42000000);
	printf("4. '' : %s\n", substr); //
	free(str);
	free(substr);
 
//	char	str2[] = "0123456789";
	char	*str2 = strdup("0123456789");
	substr = ft_substr(str2, 9, 10);
	printf("5. 9 : %s\n", substr); ////
	free(str2);
	free(substr);

	substr = ft_substr("42", 0, 0);
	printf("6. '' : %s\n",  substr);
	free(substr);

	substr = ft_substr("BONJOUR LES HARICOTS !", 8, 14);
	printf("7. LES HARICOTS ! : %s\n",  substr);
	free(substr);

	substr = ft_substr("test", 1, 2);
	printf("8. es : %s\n", substr);
	free(substr);

	return (0);
} */