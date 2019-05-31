#include<stdio.h>

int main() {
    int c;
    int arr[26] = {0};
    while( ( c=getchar()) != '\n' ) {    
        if ( c == ' ' || c == '\t' ) {
            continue;
        } else if(c >='a' && c<= 'z' ) {
            ++arr[c - 'a'];
        }
    }
    int i=0;
    for(int i=0; i<26 ; i++){
        if(arr[i] != 0) {
           printf("[%c] = ",(i+65));
        } else {
            continue;
        }
        for(int j = 0 ; j < arr[i] ;j++) {
            printf("|");
        }
        printf("\n");
    }
return 0;
}
