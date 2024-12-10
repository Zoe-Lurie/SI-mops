//scope.c


#include <stdlib.h>
#include <stdio.h>

#include "scope2.h"

extern int varA;
extern int varB;

void fun1( int x ) {
    static int num;

    switch( x ) {
        case 0:
            num = 0;
            break;
        case 1:
            num ++;
            break;
        case 2:
            num +=2;
            break;
        default:
            num --;
    }

    printf( "num=%d\n", num );
}


int main( void ) {
    fun1( 0 );
    fun1( 5 );
    fun1( 2 );
    fun1( 1 );

    varA ++;
    varB +=5;
    printf( "varA=%d, varB=%d\n", varA, varB );

    printf( "fun2=%d\n", fun2() );

    return 0;
}
