/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:46:31 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 17:50:04 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/* int	main()
{
	#include <ctype.h>
	#include <stdio.h>
	printf("ft_isalpha '0': %d\n", ft_isalpha('0'));
	printf("isalpha '0': %d\n\n", isalpha('0'));

	printf("ft_isalpha 5: %d\n", ft_isalpha(5));
	printf("isalpha 5: %d\n\n", isalpha(5));

	printf("ft_isalpha 48: %d\n", ft_isalpha(48));
	printf("isalpha 48: %d\n\n", isalpha(48));

	printf("ft_isalpha 'a': %d\n", ft_isalpha('a'));
	printf("isalpha 'a': %d\n\n", isalpha('a'));

	printf("ft_isalpha 'b': %d\n", ft_isalpha('b'));
	printf("isalpha 'b': %d\n\n", isalpha('b'));

	printf("ft_isalpha 'Z': %d\n", ft_isalpha('Z'));
	printf("isalpha 'Z': %d\n\n", isalpha('Z'));

	printf("ft_isalpha 'C': %d\n", ft_isalpha('C'));
	printf("isalpha 'C': %d\n\n", isalpha('C'));

	printf("ft_isalpha 'X': %d\n", ft_isalpha('X'));
	printf("isalpha 'X': %d\n\n", isalpha('X'));

	printf("ft_isalpha 'Z': %d\n", ft_isalpha('Z'));
	printf("isalpha 'Z': %d\n\n", isalpha('Z'));

	printf("ft_isalpha 185: %d\n", ft_isalpha(185));
	printf("isalpha 185: %d\n\n", isalpha(185));
	
	printf("ft_isalpha '5': %d\n", ft_isalpha('5'));
	printf("isalpha '5': %d\n\n", isalpha('5'));
} */