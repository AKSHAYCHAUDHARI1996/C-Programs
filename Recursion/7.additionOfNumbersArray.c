#include <stdio.h>

int AddR(int arr[], int iSize)
{
  static int iSum = 0;
  static int iCnt = 0;
  if ( iCnt != iSize )
  {
    iSum = iSum + (*arr);
    iCnt++;
    ++arr;
    AddR( arr, iSize );
  }
  return iSum;
}

int main()
{
  int arr[] = { 7,9,8,7,3,5 };
  int iRet = AddR( arr, 6 );
  printf( "%d", iRet );
  return 0;
}
