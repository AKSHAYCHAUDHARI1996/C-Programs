#include <stdio.h>

void StrRevDisplayX(char *str)
{
  if ( *str != '\0' )
  {
    StrRevDisplayX( str + 1 );
    printf( "%c \t", *str );
  }
}
int main()
{
  char arr[50] = "Chaudhari";
  StrRevDisplayX( arr ); 
  return 0;
}
