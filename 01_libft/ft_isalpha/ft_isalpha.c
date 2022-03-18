#include <stdio.h>

int ft_isalpha(char c)
{
  if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    return (1);
  else
    return (0);
}

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;

  return (i);
}

int main(int argc, char **argv)
{

  if (argc == 2 && ft_strlen(argv[1]) == 1)
    printf("%d\n", ft_isalpha(argv[1][0]));
  return (0);
}
