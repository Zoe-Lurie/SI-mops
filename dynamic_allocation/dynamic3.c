#include <stdlib.h>
#include <stdio.h>

int main(){
    
    char * c = (char *) malloc( sizeof( char));

    *c = 'a';

    printf("%c\n", *c);

    c = (char *) malloc( sizeof( char));

    *c = 'b';

    printf("%c\n", *c);

    free( c);

    return 0;
}
