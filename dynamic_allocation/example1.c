#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define STRING_SIZE strlen( "hello there")
#define MALLOC_SIZE STRING_SIZE * sizeof( char)

int main(){

    char * word = (char *) malloc( MALLOC_SIZE);

    word = "hello there";

    printf("%s\n", word);

    free( word);

    return 0;
}


