//example4.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    char message[] = "abcdef";

    printf( "sizeof(char) = %d\n", sizeof( char ) );
    printf( "sizeof(message) = %d\n", sizeof( message ) );
    printf( "strlen(message) = %d\n", strlen( message) );

    return 0;
}
