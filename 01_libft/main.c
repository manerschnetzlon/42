#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <string.h>

int main()
{
  // char c = '1';
  // int i = c;
  // printf("i : %d\n", i);
  // printf("c : %d\n", c);

  // printf("ft_isdigit : %d\n", ft_isdigit(i));
  // printf("isdigit : %d\n", isdigit(i));
  char dst[10];
  const char src[] = "Hello";
  char dst2[10];
  const char src2[] = "Hello";
  size_t n = 3;
  size_t i = 0;

  char *new_dst = memcpy((void *)dst, (void *)src, 3);
  char *new_dst2 = ft_memcpy((void *)dst2, (void *)src2, 3);

  printf("memcpy : ");
  while (i < n)
  {
    printf("%c", new_dst[i]);
    i++;
  }

  printf("\nft_memcpy : ");
  i = 0;
  while (i < n)
  {
    printf("%c", new_dst2[i]);
        i++;
  }
  return (0);
}
