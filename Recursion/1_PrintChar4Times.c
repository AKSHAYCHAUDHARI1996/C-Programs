#include <stdio.h>

void DisplayR( char ch )
{
  static int i = 1;
  if ( i <= 4 )
  {
    printf( "%c \t", ch );
    i++;
    DisplayR( ch );
  }
}

int main()
{
  DisplayR( 'M' );
  return 0;
}
