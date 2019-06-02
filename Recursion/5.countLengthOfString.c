int StrlenR(char *src)
{
  static int iCnt = 0;
  if ( *src != '\0')
  {
    iCnt++;
    src++;
    StrlenR( src );
  }
  return iCnt;
}

int main()
{
  char arr[25] = "Akshay Chaudhari";
  printf("%d", StrlenR(arr));
  return 0;
}
