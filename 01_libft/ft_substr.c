#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t  i;
  size_t  end;
  char *str;

  str = (char *)malloc(sizeof(char) * (len + 1));
  if (!str)
    return (NULL);
  i = 0;
  end = start + len;
  while (start < end)
  {
    str[i] = s[start];
    start++;
    i++;
  }
  str[i] = '\0';
  return (str);
}
