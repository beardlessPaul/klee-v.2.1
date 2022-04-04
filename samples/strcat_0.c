#include "klee/klee.h"

char *strcat(char *dest, const char *src)
{
	char *tmp = dest;
	while (*tmp != '\0')
    {
        tmp++;
    }
	while ((*tmp++ = *src++) != '\0');
	return dest;
}

int check(char *str)
{
  for (int i = 0; i < 256; i++)
  {
    if (str[i] == '\0')
    {
        return 0;
    }
      
  }
  return -1;
}

int main()
{
  char str[256];
  char dst[256] = {0};
  klee_make_symbolic(&str, 256, "str");
  strcat(dst, (const char*)str);
  return 0;
}