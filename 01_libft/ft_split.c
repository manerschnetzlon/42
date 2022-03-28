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
  char *part;
  size_t  counter;
  size_t  i;
  size_t  j;

  counter = count_parts(s, c);
  arr = (char **)malloc(sizeof(char *) * (counter + 1));
  if (!arr)
    return (NULL);
  i = 0;
  while (i < counter)
  {
    while (c_is_sep(*s, c))
      s++;
    j = 0;
    while (s[j] && !c_is_sep(s[j], c))
      j++;
    part = (char *)malloc(sizeof(char) * (j + 1));
    if (!part)
      return (NULL);
    ft_strlcpy(part, s, (j + 1));
    printf("\npart : %s", part);
    s += (j + 1);
    i++;
  }
  arr[i] = NULL;
  return (arr);
}
