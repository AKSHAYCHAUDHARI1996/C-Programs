#include<stdio.h>
#include<limits.h>

int main()
{
	printf("Signed Char min = %d \n",SCHAR_MIN);
	printf("Signed Char max  = %d \n",SCHAR_MAX);
	printf("Signed short min = %d \n",SHRT_MIN);
	printf("Signed short max = %d \n",SHRT_MAX);
	printf("Signed int min = %d \n",INT_MIN);
	printf("Signed int max = %d \n",INT_MAX);
	printf("Signed long min = %ld \n",LONG_MIN);
	printf("Signed long max = %ld \n",LONG_MIN);
				
	printf("Un-Signed char max = %u \n",UCHAR_MAX);
	printf("Un-Signed short max = %u \n",USHRT_MAX);
	printf("Un-Signed int max = %u \n",UINT_MAX);
	printf("Un-Signed long max = %lu \n",ULONG_MAX);	

return 0;
}
