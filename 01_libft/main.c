#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int main()
{
  char s1[] = "Hello Maner";
  char s2[] = " e";

  printf("\nft_strtrim : %s", ft_strtrim(s1, s2));
}

// char *ft_strtrim(char const *s1, char const *set)
