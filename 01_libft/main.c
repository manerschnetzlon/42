#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

int main()
{
  char s1[] = " Hello a";
  char s2 = 'a';

  printf("memchr : %p", memchr((void *)s1, s2, 40));
  printf("\nft_memchr : %p", ft_memchr((void *)s1, s2, 40));
}
