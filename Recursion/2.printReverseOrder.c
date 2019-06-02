void DisplayR(int iNo)
{
  static int i = iNo;
  if ( i >= 1 )
  {
    printf( "%d \t", i );
    i--;
    DisplayR( i );
  }
}

int main()
{
  DisplayR( 5 );
  return 0;
}

