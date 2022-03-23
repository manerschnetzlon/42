#include "libft.h"

int ft_atoi(const char *str)
{
  size_t  i;
  int num;
  int sign;

  num = 0;
  sign = 1;
  i = 0;
  while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    i++;
  if (str[i] == '+' || str[i] == '-')
  {
    if (str[i] == '-')
      sign = -1;
    i++;
  }
  while (str[i] >= '0' && str[i] <= '9')
  {
    num = num * 10 + (str[i] - '0');
    i++;
  }
  return (sign * num);
}
