// demo_fscanf.c
// @author: ben k steele, bks@cs.rit.edu

#include <stdio.h>
#include <stdlib.h>

/// main demonstrates fscanf usage
///
int main( int argc, char* argv[] ) {

    if ( argc < 2 ) {
        fprintf( stderr, "Usage: main file-of-numbers\n" );
        exit( EXIT_FAILURE );
    }

    FILE* pFile = fopen( argv[1], "r" );

    if ( !pFile ) {
        perror( "fopen" );

    } else {
        int sum = 0;
        int numinput;

        // fscanf scans input for specified type(s) of value(s) and
        // returns a count of the number of items matched
        int nmatch = 0;

        while ( (nmatch = fscanf( pFile, "%d", &numinput ) ) > 0 ) {

            printf( "numinput = %d\n", numinput );
            sum += numinput;

            // if program got an extra command line argument, show nmatch.
            if ( argc > 2 ) {
                printf( "nmatch = %d\n", nmatch );
            }
        }
        printf( "Sum = %d\n", sum );
        fclose( pFile );
    }
    return EXIT_SUCCESS;
}
