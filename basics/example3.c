//example3.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 10

int main( int argc, char * argv[] ) {
    char strB[ MAX_LENGTH ];

    strcpy( strB, "hello there!" );

    printf( "strB=%s\n", strB );

    printf( "test" );

    return 0;
}
