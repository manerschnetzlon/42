#include "libft.h"

size_t  strlcpy(char *dst, const char *src, size_t dstsize)
{
  size_t i;
  size_t j;

  i = 0;
  j = 0;
  while (src[j])
    j++;
  if (dstsize != 0)
  {
    while (i < (dstsize - 1) && src[i])
    {
      dst[i] = src[i];
      i++;
    }
    dst[i] = '\0';
  }
  return (j);
}
