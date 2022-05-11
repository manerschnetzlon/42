/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 08:59:31 by mschnetz          #+#    #+#             */
/*   Updated: 2022/02/05 10:54:51 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;
	int	buffer;

	i = 0;
	while (i < size)
	{
		k = i;
		j = i + 1;
		while (j != size)
		{
			if (tab[j] < tab[k])
				k = j;
			j++;
		}
		if (k != i)
		{
			buffer = tab[i];
			tab[i] = tab[k];
			tab[k] = buffer;
		}
		i++;
	}
}
