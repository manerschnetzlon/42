char  *ft_strrchr(const char *s, int c)
{
  char *c_found;
  int i;

  i = 0;
  c_found = 0;
  while(s[i])
  {
    if (s[i] == c)
      c_found = (char *)&(s[i]);
    i++;
  }
  return (c_found);
}
