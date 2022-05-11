/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:38:17 by mschnetz          #+#    #+#             */
/*   Updated: 2022/02/15 09:00:07 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	t;
	int	max;

	t = 1;
	max = 46340;
	if (nb < 1)
		return (0);
	while (t * t < nb && t <= max)
		t++;
	return (t);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	sqrt = ft_sqrt(nb);
	while (i <= sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (!ft_is_prime(nb))
	{
		if (nb % 2 == 0)
			nb++;
		else
			nb += 2;
	}
	return (nb);
}
