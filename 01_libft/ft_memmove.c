#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
  size_t  i;

  if ((src < dst) && (src + len > dst))
  {
    while (len > 0)
    {
      ((char *)dst)[len] = ((char *)src)[len];
      len--;
    }
  }
  else if ((dst < src) && (dst + len > src))
  {
    i = 0;
    while (i < len)
    {
      ((char *)dst)[i] = ((char *)src)[i];
      i++;
    }
  }
  else
    ft_memcpy(dst, src, len);
  return (dst);
}
