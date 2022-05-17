/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschnetz <mschnetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:02:00 by mschnetz          #+#    #+#             */
/*   Updated: 2022/05/17 11:18:08 by mschnetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define TRUE 1
# define FALSE 0

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c, int *count);
void	ft_putnbrbase(long long n, char *base, int *count, int is_unsigned);
void	ft_putstr(char *s, int *count);
size_t	ft_strlen(const char *str);
int		ft_printf(const char *str, ...);

#endif
