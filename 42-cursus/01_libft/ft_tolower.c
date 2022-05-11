/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:47:11 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:56:01 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/* int	main()
{
	printf(ft_tolower('a') == tolower('a') ? "OK\n" : "KO\n");
	printf(ft_tolower('A') == tolower('A') ? "OK\n" : "KO\n");
	printf(ft_tolower('0') == tolower('0') ? "OK\n" : "KO\n");
	printf(ft_tolower('*') == tolower('*') ? "OK\n" : "KO\n");
	printf(ft_tolower(6) == tolower(6) ? "OK\n" : "KO\n");
} */