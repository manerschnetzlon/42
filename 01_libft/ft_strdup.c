#include "libft.h"
#include <stdlib.h>

char  *ft_strdup(const char *s1)
{
  int i;
  char *dup;

  dup = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
  if (dup == NULL)
    return (NULL);
  i = 0;
  while (s1[i])
  {
    dup[i] = s1[i];
    i++;
  }
  dup[i] = '\0';
  return (dup);
}
