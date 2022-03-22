#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  size_t  i;

  i = 0;
  while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
    i++;
  return (s1[i] - s2[i]);
}
