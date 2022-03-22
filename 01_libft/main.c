#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

int main()
{
  char src[] = "Hello";
  char dst[10];

  strlcpy(dst, src, 2);

  printf("%s\n", dst);
  return (0);
}
