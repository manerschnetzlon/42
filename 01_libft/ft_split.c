#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int c_is_sep(char c, char sep)
{
  if (c == sep)
    return (1);
  return (0);
}

int count_parts(char const *s, char sep)
{
  size_t  i;
  size_t  count;

  i = 0;
  if (c_is_sep(s[i], sep))
    count = 0;
  else
    count = 1;
  while (s[i])
  {
    if (c_is_sep(s[i], sep) && s[i+1] && !c_is_sep(s[i + 1], sep))
      count++;
    i++;
  }
  return (count);
}

char **ft_split(char const *s, char c)
{
  char **arr;

  arr = (char **)malloc(sizeof(char *) * 10);

  if (!arr)
    return (NULL);
  printf("\ncount : %d", count_parts(s, c));
  return (arr);
}
