#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
  if (argc == 2 && ft_strlen(argv[1]) == 1)
    printf("%d\n", ft_isprint(argv[1][0]));
  return (0);
}
