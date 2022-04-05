#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

// void to_upcase(unsigned int i, char *s)
// {
//   (void) i;
//   *s -= 32;
//   return ;
// }

int main()
{
  char src[] = "abcdefghij";
  char *ptr1 = &src[0]; // abcdefghij
  char *ptr2 = &src[4]; // efghij
  char src_2[] = "abcdefghij";
  char *ptr1_2 = &src_2[0]; // abcdefghij
  char *ptr2_2 = &src_2[4]; // efghij

  ptr1 = ft_memmove(ptr1, ptr2, 2);
  ptr1_2 = memmove(ptr1_2, ptr2_2, 2);
  printf("1. ft_memmove : %s\n", ptr1); // efcdefghij
  printf("1. memmove : %s\n", ptr1_2);    // efcdefghij

  char src2[] = "abcdefghij";
  char *ptr3 = &src2[0]; // abcdefghij
  char *ptr4 = &src2[4]; // efghij
  char src2_2[] = "abcdefghij";
  char *ptr3_2 = &src2_2[0]; // abcdefghij
  char *ptr4_2 = &src2_2[4]; // efghij

  ptr4 = ft_memmove(ptr4, ptr3, 2);
  ptr4_2 = memmove(ptr4_2, ptr3_2, 2);
  printf("2. ft_memmove : %s\n", ptr4); // abghij
  printf("2. memmove : %s\n", ptr4_2); // abghij

  char src3[] = "abcdefghijklmno";
  char *ptr5 = &src3[0]; // abcdefghijklmno
  char *ptr6 = &src3[4]; // efghijklmno
  char src3_2[] = "abcdefghijklmno";
  char *ptr5_2 = &src3_2[0]; // abcdefghijklmno
  char *ptr6_2 = &src3_2[4]; // efghijklmno

  ptr5 = ft_memmove(ptr5, ptr6, 8);
  ptr5_2 = memmove(ptr5_2, ptr6_2, 8);
  printf("3. ft_memmove : %s\n", ptr5); // efghijklijklmno
  printf("3. memmove : %s\n", ptr5_2); // efghijklijklmno

  char src4[] = "abcdefghijklmno";
  char *ptr7 = &src4[0]; // abcdefghijklmno
  char *ptr8 = &src4[4]; // efghijklmno
  char src4_2[] = "abcdefghijklmno";
  char *ptr7_2 = &src4_2[0]; // abcdefghijklmno
  char *ptr8_2 = &src4_2[4]; // efghijklmno

  ptr8 = ft_memmove(ptr8, ptr7, 8);
  ptr8_2 = ft_memmove(ptr8_2, ptr7_2, 8);
  printf("4. ft_memmove : %s\n", ptr8); // efghijklijklmno
  printf("4. memmove : %s\n", ptr8_2); // efghijklijklmno

  // char s1[] = "eeeeeeHello Manereeeeeaeeee";
  // char s2 = 'e';
  // char str[] = "heeello";
  // char *tmp = str;

  // printf("tmp : %s\n", tmp);
  // // ft_sqplit(s1, s2);
  // // ft_itoa(-1234560);

  // void (*fct)(unsigned int, char *) = &to_upcase;
  // ft_striteri(tmp, (*fct));

  // printf("str : %s\n", str);
  // ft_putnbr_fd(-12345, 1);
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
