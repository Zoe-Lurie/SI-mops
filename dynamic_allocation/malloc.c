//malloc.c

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main() {
    char my_str[] = "Hello";
    char *dup = (char *) malloc(strlen(my_str));
    strcpy( dup, my_str );
    printf( "my_str: %s\n", my_str );
    printf( "dup: %s\n", dup );
    free(dup);  

    return 0;
}
