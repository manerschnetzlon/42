#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

int main()
{
  char s[] = "Hello";
  int c = 'l';

  printf("strchr : %s", strchr(s, c));
  printf("\nft_strchr : %s", ft_strchr(s, c));
}
