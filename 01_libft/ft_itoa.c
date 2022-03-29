#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int count_length(int n)
{
  size_t length;
  int num;

  length = 1;
  num = n;
  if (num <= 0)
  {
    num *= -1;
    length++;
  }
  while (num != 0)
  {
    length++;
    num /= 10;
  }
  return (length);
}

void ft_rev(char *num_str)
{
  int i;
  char buffer;
  int length;

  length = ft_strlen(num_str);
  i = 0;
  while (i < (length / 2))
  {
    buffer = num_str[i];
    num_str[i] = num_str[length - (i + 1)];
    num_str[length - (i + 1)] = buffer;
    i++;
  }
}

char  *ft_itoa(int n)
{
  int   num;
  char  *num_str;
  char  *tmp;

  num = n;
  if (num < 0)
    num *= -1;
  printf("length : %d\n", count_length(n));
  num_str = (char *)malloc(sizeof(char) * (count_length(n)));
  tmp = num_str;
  if (!num_str)
    return (NULL);
  if (num == 0)
  {
    *num_str = '0';
    num_str++;
  }
  while (num != 0)
  {
    *num_str = (num % 10) + '0';
    num_str++;
    num /= 10;
  }
  if (n < 0)
  {
    *num_str = '-';
    num_str++;
  }
  *num_str = '\0';
  printf("num : %s\n", tmp);
  ft_rev(tmp);
  printf("num 2 : %s\n", tmp);
  return (tmp);
}
