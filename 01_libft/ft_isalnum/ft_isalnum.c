#include <stdio.h>

int ft_isalnum(char c)
{
  if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    return (1);
  return (0);
}

int main(int argc, char **argv)
{
  if (argc == 2)
    printf("%d\n", ft_isalnum(argv[1][0]));
  return (0);
}
