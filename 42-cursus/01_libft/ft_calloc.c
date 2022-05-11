/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:38:16 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 17:46:02 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;

	if (nmemb && size && nmemb > (size_t) -1 / size)
		return (0);
	memory = (void *)malloc(size * nmemb);
	if (!memory)
		return (NULL);
	ft_bzero(memory, size * nmemb);
	return (memory);
}
