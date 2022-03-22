#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

int main()
{
  char s1[] = " ";
  char s2[] = " ";

  printf("strncmp : %d", strncmp(s1, s2, 4));
  printf("\nft_strncmp : %d", ft_strncmp(s1, s2, 4));
}
