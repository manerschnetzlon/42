#include "libft.h"
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
  size_t  i;

  i = 0;
  while(s[i])
  {
    ft_putchar_fd(s[i], fd);
    i++;
  }
}
