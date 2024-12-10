//example2.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 10

int main(void) {
    char strB[ MAX_LENGTH ];

    strcpy( strB, "hi!" );

    printf( "strB=%s\n", strB );
    printf( "length of strB = %lu\n", strlen( strB ) );
    printf( "sizeof strB = %lu\n", sizeof( strB ));

    return 0;
}
