/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:36:55 by mschnetz          #+#    #+#             */
/*   Updated: 2022/02/22 09:47:16 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	diff;

	diff = max - min;
	if (diff <= 0)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * diff);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < diff)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
