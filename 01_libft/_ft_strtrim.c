#include "libft.h"
#include <stdlib.h>

int c_is_trim(char c, char const *set)
{
  size_t  i;

  i = 0;
  while (set[i])
  {
    if (c == set[i])
      return (1);
    i++;
  }
  return (0);
}

int count_trim(char const *s1, char const *set)
{
  size_t i;
  size_t count;

  count = 0;
  i = 0;
  while (s1[i])
  {
    if (c_is_trim(s1[i], set))
      count++;
    i++;
  }
  return (count);
}

char *ft_strtrim(char const *s1, char const *set)
{
  char  *str;
  size_t  i;
  size_t  j;

  str = (char *)malloc(sizeof(char) * ((ft_strlen(s1) - count_trim(s1, set)) + 1));
  if (!str)
    return (NULL);
  i = 0;
  j = 0;
  while (s1[i])
  {
    if (!c_is_trim(s1[i], set))
    {
      str[j] = s1[i];
      j++;
    }
    i++;
  }
  str[j] = '\0';
  return (str);
}
