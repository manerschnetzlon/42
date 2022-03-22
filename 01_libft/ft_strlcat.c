#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
  size_t i;
  size_t j;
  size_t total_length;

  i = 0;
  j = 0;
  while (dst[i] && i < dstsize)
    i++;
  while (src[j])
    j++;
  if (dstsize <= i)
    return (dstsize + j);
  total_length = i + j;
  j = 0;
  while (src[j] && i < dstsize - 1)
  {
    dst[i] = src[j];
    i++;
    j++;
  }
  dst[i] = '\0';
  return (total_length);
}
