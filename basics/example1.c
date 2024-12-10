// example1.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char * strA = "hello there";

    printf( "strlen(strA)=%lu\nsizeof(strA)=%lu\n", strlen( strA ), sizeof( strA ) );

    return 0;
}
