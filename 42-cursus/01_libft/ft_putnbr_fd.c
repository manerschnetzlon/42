/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:12:36 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:33:43 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		i = -n;
	}
	else
		i = n;
	if (i >= 10)
		ft_putnbr_fd(i / 10, fd);
	ft_putchar_fd(i % 10 + '0', fd);
}

/* int main()
{
	printf("0\n");
	ft_putnbr_fd(0, 1);
	printf("\n\n");
	
	printf("-42\n");
	ft_putnbr_fd(-42, 1);
	printf("\n\n");

	printf("123456789\n");
	ft_putnbr_fd(123456789, 1);
	printf("\n\n");

	printf("-2147483648\n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n\n");
} */