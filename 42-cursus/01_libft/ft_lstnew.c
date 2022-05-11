/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:42:19 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:16:54 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}

/* int	main(void)
{
	int		content = 1;
	void	*ptr_content = (void *)&content;
	int		*ptr_content_to_display;
	
	t_list	*list = ft_lstnew((void *)ptr_content);
	t_list	*first = list;

	while (first)
	{
		ptr_content_to_display = (int *)(first->content);
		printf("%d -> ", *ptr_content_to_display);
		first = list->next;
	}
	printf("NULL\n\n");
	free (list);
	return (0);
} */