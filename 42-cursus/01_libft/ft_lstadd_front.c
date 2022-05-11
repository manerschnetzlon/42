/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:34:39 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:02:20 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
	return ;
}

/* void	ft_print(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	printf("lst : ");
	while (tmp)
	{
		printf("%d -> ", *(int *)(tmp->content));
		tmp = tmp->next;
	}
	tmp = lst;
	printf("END\n");
	printf("size : %d\n", ft_lstsize(tmp));
	printf("last content : %d\n\n", *(int*)ft_lstlast(tmp)->content);
}

int	main(void)
{
	int		content1 = 1;
	int		content2 = 2;
	void	*ptr_content1 = (void *)&content1;
	void	*ptr_content2 = (void *)&content2;
	
	t_list	*list1 = ft_lstnew((void *)ptr_content1);
	t_list	*list2 = ft_lstnew((void *)ptr_content2);
	t_list	*first = list1;

	ft_print(first);

	ft_lstadd_front(&first, list2);

	ft_print(list2);

	free(list1);
	free(list2);
	return (0);
} */