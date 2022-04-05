#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
  if ((src < dst) && (src + len > dst))
  {
    while (len > 0)
    {
      ((char *)dst)[len] = ((char *)src)[len];
      len--;
    }
  }
  else
    ft_memcpy(dst, src, len);
  return (dst);
}
