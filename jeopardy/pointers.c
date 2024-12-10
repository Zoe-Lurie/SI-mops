#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    int array[] = {5, 4, 3, 2, 1, 0};

    int * b = array + 2;

    int * c = b + *b;

    int ** d = &c;

    int x = *(((*d) - *b) + *c) + 1;

    printf("%d\n", x);

    return 0;
}

