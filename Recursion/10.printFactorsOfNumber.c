void FactorR(int iNo)
{
  static int i = 1;
  if ( i != (iNo / 2) + 1 )
  {
    if ( iNo%i == 0 )
    {
      printf( "%d \t", i );
    }
  i++;
  FactorR( iNo );
  }
}

int main()
{
  FactorR( 15 );
  return 0;
}
