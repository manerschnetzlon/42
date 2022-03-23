#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

int main()
{
  char s1[] = " a 2147483648987   32";

  printf("atoi : %d", atoi(s1));
  printf("\nft_atoi : %d", ft_atoi(s1));
}
