#include <stdio.h>
int main()
{
    int i=0;
    i = getchar();
    while( i != EOF ) {
        putchar(i);
        i = getchar();
        if ( i == ' ' ) {
            putchar(i);
            while( i == ' ') {
                i = getchar();
            }
        }
     }
return 0;
}
