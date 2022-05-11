/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:39:15 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:56:16 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/* int	main()
{
	printf(ft_toupper('a') == toupper('a') ? "OK\n" : "KO\n");
	printf(ft_toupper('A') == toupper('A') ? "OK\n" : "KO\n");
	printf(ft_toupper('0') == toupper('0') ? "OK\n" : "KO\n");
	printf(ft_toupper('*') == toupper('*') ? "OK\n" : "KO\n");
	printf(ft_toupper(6) == toupper(6) ? "OK\n" : "KO\n");
} */