#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
  void  *memory;
  size_t total_size;

  total_size = size * count;
  memory = (void *)malloc(total_size);
  if (!memory)
    return (NULL);
  ft_bzero(memory, total_size);
  return (memory);
}
