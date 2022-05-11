/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:31:30 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 17:44:29 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		num;
	int		sign;

	num = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * num);
}

/* int	main(void)
{
	printf("1. 2147483647 : %d\n", ft_atoi("2147483647"));
	printf("2. -2147483648 : %d\n", ft_atoi("-2147483648"));
	printf("3. 0 : %d\n", ft_atoi("0"));
	printf("4. 0 : %d\n", ft_atoi("000"));
	printf("5. 1 : %d\n", ft_atoi("001"));
	printf("6. -42 : %d\n", ft_atoi("-42"));
	printf("7 : 9223372036854775807 : %d\n", atoi("9223372036854775807"));
} */