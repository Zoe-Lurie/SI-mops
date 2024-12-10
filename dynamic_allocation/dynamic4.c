#include <stdlib.h>
#include <stdio.h>

int main(){
    
    char * ptr = (char *) malloc( sizeof( char));

    *ptr = 'z';

    printf("%c\n", *ptr);

    free( ptr);

    *ptr = 'f';

    printf("%c\n", *ptr);

    free( ptr);

    return 0;
}
