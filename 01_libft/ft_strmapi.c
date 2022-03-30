#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  size_t  i;
  char  *new_str;

  if (!s)
    return (NULL);
  new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
  if (!new_str)
    return (NULL);
  i = 0;
  while (s[i])
  {
    new_str[i] = (*f)(i, s[i]);
    i++;
  }
  new_str[i] = '\0';
  return (new_str);
}
