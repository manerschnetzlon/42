/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:48:41 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:17:47 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

/* int	main(void)
{
	int		content1 = 1;
	int		content2 = 2;
	int		content3 = 42;
	int		content4 = 21;
	int		content5 = 8;
	void	*ptr_content1 = (void *)&content1;
	void	*ptr_content2 = (void *)&content2;
	void	*ptr_content3 = (void *)&content3;
	void	*ptr_content4 = (void *)&content4;
	void	*ptr_content5 = (void *)&content5;
	
	t_list	*list1 = ft_lstnew((void *)ptr_content1);
	t_list	*list2 = ft_lstnew((void *)ptr_content2);
	t_list	*list3 = ft_lstnew((void *)ptr_content3);
	t_list	*list4 = ft_lstnew((void *)ptr_content4);
	t_list	*list5 = ft_lstnew((void *)ptr_content5);
	t_list	*first = list1;

	ft_lstadd_front(&first, list2);
	ft_lstadd_front(&first, list3);
	ft_lstadd_front(&first, list4);
	ft_lstadd_front(&first, list5);
	printf("size : %d\n\n", ft_lstsize(first));

	free(list1);
	free(list2);
	free(list3);
	free(list4);
	free(list5);
	return (0);
} */