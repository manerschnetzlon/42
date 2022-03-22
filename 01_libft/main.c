#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

int main()
{
  char src[] = "Hello";
  char dst[10];

  memmove(dst, src, 2);
  dst[3] = '\0';

  printf("%s\n", dst);
  return (0);
}
