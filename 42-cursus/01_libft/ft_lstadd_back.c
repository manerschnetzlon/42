/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:21:34 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:03:47 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
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
	int		content3 = 3;
	int		content4 = 4;
	int		content5 = 5;
	int		content6 = 6;
	void	*ptr_content1 = (void *)&content1;
	void	*ptr_content2 = (void *)&content2;
	void	*ptr_content3 = (void *)&content3;
	void	*ptr_content4 = (void *)&content4;
	void	*ptr_content5 = (void *)&content5;
	void	*ptr_content6 = (void *)&content6;
	
	t_list	*list1 = ft_lstnew((void *)ptr_content1);
	t_list	*list2 = ft_lstnew((void *)ptr_content2);
	t_list	*list3 = ft_lstnew((void *)ptr_content3);
	t_list	*list4 = ft_lstnew((void *)ptr_content4);
	t_list	*list5 = ft_lstnew((void *)ptr_content5);
	t_list	*list6 = ft_lstnew((void *)ptr_content6);
	t_list	*first;
	list6->next = NULL;
	first = list1;

	ft_lstadd_front(&first, list2);
	ft_lstadd_front(&first, list3);
	ft_lstadd_front(&first, list4);
	ft_lstadd_front(&first, list5);

	first = list5;
	ft_print(first);
	ft_lstadd_back(&first, list6);
	ft_print(first);

	free(list1);
	free(list2);
	free(list3);
	free(list4);
	free(list5);
	free(list6);
	
	return (0);
} */