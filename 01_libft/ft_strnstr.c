#include "libft.h"

char  *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
  size_t i;
  size_t j;

  i = 0;
  j = 0;
  while (i < len && needle[j] && haystack[i])
  {
    j = 0;
    while (i + j < len && haystack[i + j] && haystack[i + j] == needle[j])
      j++;
    if (needle[j])
      i++;
  }
  if (needle[j])
    return (0);
  return ((char *)&haystack[i]);
}
