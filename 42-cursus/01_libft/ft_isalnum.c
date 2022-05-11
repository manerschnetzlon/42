/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:22:12 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 17:49:09 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/* int	main()
{
	#include <ctype.h>
	#include <stdio.h>
	printf("ft_isalnum 0: %d\n", ft_isalnum(0));
	printf("isalnum 0: %d\n\n", isalnum(0));

	printf("ft_isalnum 5: %d\n", ft_isalnum(5));
	printf("isalnum 5: %d\n\n", isalnum(5));

	printf("ft_isalnum 48: %d\n", ft_isalnum(48));
	printf("isalnum 48: %d\n\n", isalnum(48));

	printf("ft_isalnum a: %d\n", ft_isalnum('a'));
	printf("isalnum a: %d\n\n", isalnum('a'));

	printf("ft_isalnum 50: %d\n", ft_isalnum(50));
	printf("isalnum 50: %d\n\n", isalnum(50));

	printf("ft_isalnum 185: %d\n", ft_isalnum(185));
	printf("isalnum 185: %d\n\n", isalnum(185));

	printf("ft_isalnum '5': %d\n", ft_isalnum('5'));
	printf("isalnum '5': %d\n\n", isalnum('5'));

	printf("ft_isalnum '9': %d\n", ft_isalnum('9'));
	printf("isalnum '9': %d\n\n", isalnum('9'));

	printf("ft_isalnum ' ': %d\n", ft_isalnum(' '));
	printf("isalnum ' ': %d\n\n", isalnum(' '));

	printf("ft_isalnum '*': %d\n", ft_isalnum('*'));
	printf("isalnum '*': %d\n\n", isalnum('*'));
	
	printf("ft_isalnum '\n': %d\n", ft_isalnum('\n'));
	printf("isalnum '\n': %d\n\n", isalnum('\n'));
} */