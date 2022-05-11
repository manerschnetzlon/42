/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:51:06 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:50:49 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	c_is_trim(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

size_t	count_trim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	size_t	count;

	i = 0;
	while (c_is_trim(s1[i], set))
		i++;
	count = i;
	if (!s1[i])
		return (count);
	i = 0;
	len = ft_strlen(s1);
	while (c_is_trim(s1[len - 1 - i], set))
		i++;
	count += i;
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(s1) - count_trim(s1, set);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (c_is_trim(s1[i], set))
		i++;
	while (j < len)
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}

/* int main()
{
	printf("1.\n");
	char *trim = ft_strtrim("   Hello World !  ", " ");
	char *s = ft_strdup(trim);
	printf("'Hello World !' : %s\n", s);
	printf(strcmp("Hello World !", s) == 0 ? "OK\n\n" : "KO\n\n");
	free(trim);
	free(s);

	printf("2.\n");
	trim = ft_strtrim("xxxxxxHello!x", "x");
	s = ft_strdup(trim);
	printf("'Hello!' : %s\n", s);
	printf(strcmp("Hello!", s) == 0 ? "OK\n\n" : "KO\n\n");
	free(trim);
	free(s);

	printf("3.\n");
	trim = ft_strtrim("    ", " ");
	s = ft_strdup(trim);
	printf("'' : %s\n", s);
	printf(strcmp("", s) == 0 ? "OK\n\n" : "KO\n\n");
	free(trim);
	free(s);

	printf("4.\n");
	trim = ft_strtrim("abaacbbcmaneraccbab  y", "abc");
	s = ft_strdup(trim);
	printf("'maneraccbab  y' : %s\n", s);
	printf(strcmp("maneraccbab  y", s) == 0 ? "OK\n\n" : "KO\n\n");
	free(trim);
	free(s);

	printf("5.\n");
	trim = ft_strtrim("qwerty", "abc");
	s = ft_strdup(trim);
	printf("'qwerty' : %s\n", s);
	printf(strcmp("qwerty", s) == 0 ? "OK\n\n" : "KO\n\n");
	free(trim);
	free(s);
} */