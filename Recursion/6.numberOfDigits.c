#include <stdio.h>

int CountR( int iNo )
{
  static int iCnt = 0;
  if ( iNo != 0 )
  {
    iCnt++;
    iNo = iNo / 10;
    CountR( iNo );
  }
  return iCnt;
}

int main()
{
  int iRet = 0;
  iRet = CountR(1121);
  printf( "%d", iRet );
  return 0;
}
