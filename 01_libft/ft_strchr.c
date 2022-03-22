char  *ft_strchr(const char *s, int c)
{
  char *str;
  int i;

  str = (char *)s;
  i = 0;
  while (str[i])
  {
    if (str[i] == c)
      return (&(str[i]));
    i++;
  }
  return (0);
}
