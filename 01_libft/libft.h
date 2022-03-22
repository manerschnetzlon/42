#ifndef LIBFT_H_
#define LIBFT_H_

typedef unsigned long size_t;

void ft_bzero(void *s, size_t n);
int ft_isalpha(char c);
int ft_isdigit(int c);
int ft_isalnum(char c);
int ft_isascii(char c);
int ft_isprint(char c);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
char *ft_strchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlen(const char *str);
char *ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper_l(int c);

#endif
