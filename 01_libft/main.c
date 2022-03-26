#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int main()
{
  char s1[] = "e      Heeeello Manere     e";
  char s2 = 'e';

  ft_split(s1, s2);
  // printf("\nft_split : %d", ft_split(s1, s2));
}

// char *ft_strtrim(char const *s1, char const *set)
