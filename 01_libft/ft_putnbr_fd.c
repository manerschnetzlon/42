#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
  size_t i;

  if (n < 0)
  {
    ft_putchar_fd('-', fd);
    i = -n;
  }
  else
    i = n;
  if (i >= 10)
    ft_putnbr_fd(i / 10, fd);
  ft_putchar_fd(i % 10 + '0', fd);
}
