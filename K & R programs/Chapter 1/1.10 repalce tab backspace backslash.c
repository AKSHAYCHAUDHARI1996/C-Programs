#include <stdio.h>

int main()
{
    int i=0;
    i = getchar();
    while(i != EOF) {
        if(i == '\t'){
            putchar('\\');
            putchar('t');
        } else if (i == '\b'){
            putchar('\\');
            putchar('b');
        } else if (i == '\\') {
            putchar('\\');
            putchar('\\');
        } else {
            putchar(i);
        }
        i=getchar(); 
    }
return 0;
}
