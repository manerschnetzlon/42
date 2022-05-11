/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:22:41 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 17:50:56 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* int	main()
{
	#include <ctype.h>
	#include <stdio.h>
  
	printf("ft_isascii 0: %d\n", ft_isascii(0));
	printf("isascii 0: %d\n\n", isascii(0));

	printf("ft_isascii 5: %d\n", ft_isascii(5));
	printf("isascii 5: %d\n\n", isascii(5));

	printf("ft_isascii 48: %d\n", ft_isascii(48));
	printf("isascii 48: %d\n\n", isascii(48));

	printf("ft_isascii a: %d\n", ft_isascii('a'));
	printf("isascii a: %d\n\n", isascii('a'));

	printf("ft_isascii 50: %d\n", ft_isascii(50));
	printf("isascii 50: %d\n\n", isascii(50));

	printf("ft_isascii 185: %d\n", ft_isascii(185));
	printf("isascii 185: %d\n\n", isascii(185));

	printf("ft_isascii '5': %d\n", ft_isascii('5'));
	printf("isascii '5': %d\n\n", isascii('5'));

	printf("ft_isascii '9': %d\n", ft_isascii('9'));
	printf("isascii '9': %d\n\n", isascii('9'));

	printf("ft_isascii ' ': %d\n", ft_isascii(' '));
	printf("isascii ' ': %d\n\n", isascii(' '));

	printf("ft_isascii '*': %d\n", ft_isascii('*'));
	printf("isascii '*': %d\n\n", isascii('*'));

	printf("ft_isascii '\n': %d\n", ft_isascii('\n'));
	printf("isascii '\n': %d\n\n", isascii('\n'));
} */