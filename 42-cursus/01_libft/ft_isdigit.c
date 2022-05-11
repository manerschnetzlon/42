/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:21:34 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 17:51:36 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/* int	main()
{
	#include <ctype.h>
	#include <stdio.h>
	printf("ft_isdigit 0: %d\n", ft_isdigit(0));
	printf("isdigit 0: %d\n\n", isdigit(0));

	printf("ft_isdigit 5: %d\n", ft_isdigit(5));
	printf("isdigit 5: %d\n\n", isdigit(5));

	printf("ft_isdigit 48: %d\n", ft_isdigit(48));
	printf("isdigit 48: %d\n\n", isdigit(48));

	printf("ft_isdigit a: %d\n", ft_isdigit('a'));
	printf("isdigit a: %d\n\n", isdigit('a'));

	printf("ft_isdigit 50: %d\n", ft_isdigit(50));
	printf("isdigit 50: %d\n\n", isdigit(50));

	printf("ft_isdigit 185: %d\n", ft_isdigit(185));
	printf("isdigit 185: %d\n\n", isdigit(185));

	printf("ft_isdigit '5': %d\n", ft_isdigit('5'));
	printf("isdigit '5': %d\n\n", isdigit('5'));
	
	printf("ft_isdigit '9': %d\n", ft_isdigit('9'));
	printf("isdigit '9': %d\n\n", isdigit('9'));
} */