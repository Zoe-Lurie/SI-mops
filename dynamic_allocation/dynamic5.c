#include <stdlib.h>
#include <stdio.h>

int main(){
    char * string = "hello there";

    string = (char *) malloc( sizeof( char) * 12);

    printf("%s\n", string);

    free( string);

    return 0;
}
