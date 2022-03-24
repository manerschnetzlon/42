#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int main()
{
  char s1[] = "Hello ";
  char s2[] = "Maner";

  printf("\nft_strjoin : %s", ft_strjoin(s1, s2));
}
