// adapted from sprintf example in cplusplus.com
// @author ben k steele, bks@cs.rit.edu

#include <stdio.h>
#include <stdlib.h>

/// main demonstrates sprintf (from cplusplus.com)
///
int main( void ) {

    char buffer[70];

    int count;
    int a = 5;
    int b = 3;

    count = sprintf( buffer, "%d plus %d is %d", a, b, a + b );

    printf( "[%s] is a C string %d chars long\n", buffer, count );

    return EXIT_SUCCESS;
}
