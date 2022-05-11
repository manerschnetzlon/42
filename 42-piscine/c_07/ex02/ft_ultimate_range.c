/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:10:57 by mschnetz          #+#    #+#             */
/*   Updated: 2022/02/22 09:48:05 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;

	diff = max - min;
	if (diff <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * diff);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < diff)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (diff);
}
