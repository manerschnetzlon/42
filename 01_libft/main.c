#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

char to_upcase(unsigned int i, char s)
{
  return (s - (32 - i + i));
}

int main()
{
  // char s1[] = "eeeeeeHello Manereeeeeaeeee";
  // char s2 = 'e';
  char str[] = "hello";

  // ft_split(s1, s2);
  // ft_itoa(-1234560);

  char (*f)(unsigned int, char) = &to_upcase;

  printf("%s\n", ft_strmapi(str, (*f)));
}

// char *ft_strmapi(char const *s, char (*f)(unsigned int, char))

// static int triple(int a)
// {
//   return a * 3;
// }

// int main(void)
// {
//   int (*pt)(int) = &triple;

//   printf("%d.\n", (*pt)(3));
//   return 0;
// }
