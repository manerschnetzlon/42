/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:00:36 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 17:53:06 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_length(int n)
{
	size_t	length;
	int		num;

	length = 1;
	num = n;
	if (num <= 0)
	{
		num *= -1;
		length++;
	}
	while (num != 0)
	{
		length++;
		num /= 10;
	}
	return (length);
}

void	rev(char *num_str)
{
	int		i;
	char	buffer;
	int		length;

	length = ft_strlen(num_str);
	i = 0;
	while (i < (length / 2))
	{
		buffer = num_str[i];
		num_str[i] = num_str[length - (i + 1)];
		num_str[length - (i + 1)] = buffer;
		i++;
	}
	return ;
}

void	fill_num_str(int n, long num, char *num_str)
{
	if (num == 0)
	{
		*num_str = '0';
		num_str++;
	}
	while (num != 0)
	{
		*num_str = (num % 10) + '0';
		num_str++;
		num /= 10;
	}
	if (n < 0)
	{
		*num_str = '-';
		num_str++;
	}
	*num_str = '\0';
}

char	*ft_itoa(int n)
{
	long		num;
	char		*num_str;
	char		*tmp;

	num = n;
	if (num < 0)
		num *= -1;
	num_str = (char *)malloc(sizeof(char) * (count_length(n)));
	if (!num_str)
		return (NULL);
	tmp = num_str;
	fill_num_str(n, num, num_str);
	rev(tmp);
	return (tmp);
}

/* int	main(void)
{
	printf("1. 2147483647 : %s\n", ft_itoa(2147483647));
	printf("2. -2147483648 : %s\n", ft_itoa(-2147483648));
	printf("3. 0 : %s\n", ft_itoa(0));
	printf("4. 0 : %s\n", ft_itoa(000));
	printf("5. 1 : %s\n", ft_itoa(001));
	printf("6. -42 : %s\n", ft_itoa(-42));
} */