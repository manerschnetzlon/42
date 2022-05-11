/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:43:27 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 17:52:30 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/* int	main(void)
{
	printf("ft_isprint '0': %d\n", ft_isprint('0'));
	printf("isprint '0': %d\n\n", isprint('0'));

	printf("ft_isprint 5: %d\n", ft_isprint(5));
	printf("isprint 5: %d\n\n", isprint(5));

	printf("ft_isprint 48: %d\n", ft_isprint(48));
	printf("isprint 48: %d\n\n", isprint(48));

	printf("ft_isprint 'a': %d\n", ft_isprint('a'));
	printf("isprint 'a': %d\n\n", isprint('a'));

	printf("ft_isprint 'b': %d\n", ft_isprint('b'));
	printf("isprint 'b': %d\n\n", isprint('b'));

	printf("ft_isprint 'Z': %d\n", ft_isprint('Z'));
	printf("isprint 'Z': %d\n\n", isprint('Z'));

	printf("ft_isprint 'C': %d\n", ft_isprint('C'));
	printf("isprint 'C': %d\n\n", isprint('C'));

	printf("ft_isprint 'X': %d\n", ft_isprint('X'));
	printf("isprint 'X': %d\n\n", isprint('X'));

	printf("ft_isprint 'Z': %d\n", ft_isprint('Z'));
	printf("isprint 'Z': %d\n\n", isprint('Z'));

	printf("ft_isprint 185: %d\n", ft_isprint(185));
	printf("isprint 185: %d\n\n", isprint(185));
	
	printf("ft_isprint '5': %d\n", ft_isprint('5'));
	printf("isprint '5': %d\n\n", isprint('5'));

	printf("ft_isprint '	': %d\n", ft_isprint('	'));
	printf("isprint '	': %d\n\n", isprint('	'));

	printf("ft_isprint '+': %d\n", ft_isprint('+'));
	printf("isprint '+': %d\n\n", isprint('+'));

	printf("ft_isprint '\n': %d\n", ft_isprint('\n'));
	printf("isprint '\n': %d\n\n", isprint('\n'));
	
	printf("ft_isprint '@': %d\n", ft_isprint('@'));
	printf("isprint '@': %d\n\n", isprint('@'));
} */