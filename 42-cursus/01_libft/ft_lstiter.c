/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:08:31 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:16:09 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	ft_square(void *content)
{
  *(int*)content *= *(int*)content;
	return ;
} */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
	return ;
}

/* void	print_lst(t_list *first_lst)
{
	t_list	*tmp = first_lst;
	int		*ptr_content_to_display;

	printf("lst : ");
	while (first_lst)
	{
		ptr_content_to_display = (int *)(first_lst->content);
		printf("%d (%p) -> ", *ptr_content_to_display, first_lst);
		first_lst = first_lst->next;
	}
	printf("END\n");
	first_lst = tmp;
	printf("size : %d\n", ft_lstsize(first_lst));
	printf("last content : %d\n\n", *(int*)ft_lstlast(first_lst)->content);

	return ;
}

int	main(void)
{
	int	*ptr_content1 = (int *)malloc(sizeof(int));
	int	*ptr_content2 = (int *)malloc(sizeof(int));
	int	*ptr_content3 = (int *)malloc(sizeof(int));
	int	*ptr_content4 = (int *)malloc(sizeof(int));
	int	*ptr_content5 = (int *)malloc(sizeof(int));
	int	*ptr_content6 = (int *)malloc(sizeof(int));
	*ptr_content1 = 1;
	*ptr_content2 = 2;
	*ptr_content3 = 3;
	*ptr_content4 = 4;
	*ptr_content5 = 5;
	*ptr_content6 = 6;
	t_list	*list1 = ft_lstnew((void *)ptr_content1);
	t_list	*list2 = ft_lstnew((void *)ptr_content2);
	t_list	*list3 = ft_lstnew((void *)ptr_content3);
	t_list	*list4 = ft_lstnew((void *)ptr_content4);
	t_list	*list5 = ft_lstnew((void *)ptr_content5);
	t_list	*list6 = ft_lstnew((void *)ptr_content6);
	list6->next = NULL;
	t_list	*first = list1;

	void (*ft_sqr)(void *);
	ft_sqr = &ft_square;

	ft_lstadd_front(&first, list5);
	ft_lstadd_front(&first, list4);
	ft_lstadd_front(&first, list3);
	ft_lstadd_front(&first, list2);
	ft_lstadd_back(&first, list6);

	print_lst(first);

	ft_lstiter(first, ft_sqr);
		
	print_lst(first);

	free(ptr_content1);
	free(list1);
	free(ptr_content2);
	free(list2);
	free(ptr_content3);
	free(list3);
	free(ptr_content4);
	free(list4);
	free(ptr_content5);
	free(list5);
	free(ptr_content6);
	free(list6);

	return (0);
} */