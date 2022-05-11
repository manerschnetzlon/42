/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:59:04 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/09 18:32:43 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if ((src < dest) && (src + n > dest))
	{
		while (n > 0)
		{
			((char *)dest)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/* int	main(void)
{
	#include <stdio.h>
	#include <strings.h>
	#include <string.h>

	char src1[] = "abcdefghij";
	char *ptr1_1 = &src1[0]; // abcdefghij
	char *ptr1_2 = &src1[4]; // efghij
	char src2[] = "abcdefghij";
	char *ptr2_1 = &src2[0]; // abcdefghij
	char *ptr2_2 = &src2[4]; // efghij

	ptr1_1 = ft_memmove(ptr1_1, ptr1_2, 2);
	ptr2_1 = memmove(ptr2_1, ptr2_2, 2);
	printf("1. ft_memmove : %s\n", ptr1_1); // efcdefghij
	printf("1. memmove : %s\n", ptr2_1);    // efcdefghij
	printf("1. ptr1_1, ptr2_1: ");
	printf(strcmp(ptr1_1, ptr2_1) == 0 ? "OK\n\n" : "KO\n\n");

	char src3[] = "abcdefghij";
	ptr1_1 = &src3[0]; // abcdefghij
	ptr1_2 = &src3[4]; // efghij
	char src4[] = "abcdefghij";
	ptr2_1 = &src4[0]; // abcdefghij
	ptr2_2 = &src4[4]; // efghij

	ptr1_2 = ft_memmove(ptr1_2, ptr1_1, 2);
	ptr2_2 = memmove(ptr2_2, ptr2_1, 2);
	printf("2. ft_memmove : %s\n", ptr1_2); // efcdefghij
	printf("2. memmove : %s\n", ptr2_2);    // efcdefghij
	printf("2. ptr1_2, ptr2_2: ");
	printf(strcmp(ptr1_2, ptr2_2) == 0 ? "OK\n\n" : "KO\n\n");

	char src5[] = "abcdefghijklmno";
	ptr1_1 = &src5[0]; // abcdefghijklmno
	ptr1_2 = &src5[4]; // efghijklmno
	char src6[] = "abcdefghijklmno";
	ptr2_1 = &src6[0]; // abcdefghijklmno
	ptr2_2 = &src6[4]; // efghijklmno

	ptr1_1 = ft_memmove(ptr1_1, ptr1_2, 8);
	ptr2_1 = memmove(ptr2_1, ptr2_2, 8);
	printf("3. ft_memmove : %s\n", ptr1_1); // efghijklijklmno
	printf("3. memmove : %s\n", ptr2_1); // efghijklijklmno
	printf("3. ptr1_1, ptr2_1: ");
	printf(strcmp(ptr1_1, ptr2_1) == 0 ? "OK\n\n" : "KO\n\n");


	char src7[] = "abcdefghijklmno";
	ptr1_1 = &src7[0]; // abcdefghijklmno
	ptr1_2 = &src7[4]; // efghijklmno
	char src8[] = "abcdefghijklmno";
	ptr2_1 = &src8[0]; // abcdefghijklmno
	ptr2_2 = &src8[4]; // efghijklmno

	ptr1_2 = ft_memmove(ptr1_2, ptr1_1, 8);
	ptr2_2 = ft_memmove(ptr2_2, ptr2_1, 8);
	printf("4. ft_memmove : %s\n", ptr1_2); // efghijklijklmno
	printf("4. memmove : %s\n", ptr2_2); // efghijklijklmno
	printf("4. ptr1_2, ptr2_2: ");
	printf(strcmp(ptr1_2, ptr2_2) == 0 ? "OK\n\n" : "KO\n\n");
} */