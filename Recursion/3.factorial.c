#include <stdio.h>

int FactR(int iNo)
{
  static int Ans = 1;
  if ( iNo != 1 )
  {
    Ans = Ans * iNo;
    iNo--;
    FactR( iNo );
  }
  return Ans;
}

int main()
{
  int iRet = 0;
  iRet = FactR( 4 );
  printf( "%d", iRet );
  return 0;
}
