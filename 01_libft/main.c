#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

int main()
{
  char s[] = "Hello";
  int c = 'l';

  printf("strrchr : %s", strrchr(s, c));
  printf("\nft_strrchr : %s", ft_strrchr(s, c));
}
