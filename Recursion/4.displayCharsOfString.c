#include <stdio.h>
void StrDisplayR(char *src)
{
  if (*src != '\0')
  {
  printf("%c ", *src);
  src++;
  StrDisplayR(src);
  }
}

int main()
{
  char arr[30] = "Akshay Chaudhari";
  StrDisplayR(arr);
  return 0;
}
