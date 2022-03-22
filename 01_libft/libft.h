#ifndef LIBFT_H_
#define LIBFT_H_

typedef unsigned long size_t;

size_t ft_strlen(const char *str);
int ft_isalpha(char c);
int ft_isdigit(int c);
int ft_isalnum(char c);
int ft_isascii(char c);
int ft_isprint(char c);
void *ft_memset(void *b, int c, size_t len);
void *ft_memcpy(void *dst, const void *src, size_t n);
void bzero(void *s, size_t n);
void *memmove(void *dst, const void *src, size_t len);

#endif
